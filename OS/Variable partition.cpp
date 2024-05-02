#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include <windows.h>
#define Free 0  // 空闲状态
#define Busy 1  // 已用状态
#define OK 1    // 完成
#define ERROR 0 // 出错
typedef int Status;
int n = 0;              // 判断是否要开创空间表
long MAX_length;        // 最大内存空间
typedef struct FreeArea // 定义一个空闲区说明表结构
{
  int number;   // 分区号
  long size;    // 分区大小
  long address; // 分区地址
  int state;    // 状态
} ElemType;

// 线性表的双向链表存储结构
typedef struct DuLNode
{
  ElemType data;
  struct DuLNode *prior; // 前趋指针
  struct DuLNode *next;  // 后继指针
} DuLNode, *DuLinkList;

DuLinkList first; // 头结点
DuLinkList last;  // 尾结点

Status allocation(int);    // 内存分配
Status free(int);          // 内存回收
Status FirstFit(int, int); // 首次适应算法
Status BestFit(int, int);  // 最佳适应算法
void show();               // 查看分配
Status InitList();         // 开创空间表

Status InitList() // 开创带头结点的内存空间链表
{
  first = (DuLinkList)malloc(sizeof(DuLNode));
  last = (DuLinkList)malloc(sizeof(DuLNode));
  first->prior = NULL;
  first->next = last;
  last->prior = first;
  last->next = NULL;
  last->data.address = 0;
  last->data.size = MAX_length;
  last->data.number = 0;
  last->data.state = Free;
  return OK;
}// 最佳适应算法
Status BestFit(int number, int request)
{
  int ch; // 记录最小剩余空间
  DuLinkList DLL = (DuLinkList)malloc(sizeof(DuLNode));
  DLL->data.number = number;
  DLL->data.size = request;
  DLL->data.state = Busy;
  DuLNode *p = first->next;
  DuLNode *q = NULL; // 记录最佳插入位置
  while (p)          // 初始化最小空间和最佳位置
  {
    if (p->data.state == Free && (p->data.size > request || p->data.size == request))
    {
      q = p;
      ch = p->data.size - request;
      break;
    }
    p = p->next;
  }
  while (p)
  {
    if (p->data.state == Free && p->data.size == request) // 空闲块大小恰好合适
    {
      p->data.number = number;
      p->data.state = Busy;
      return OK;
      break;
    }
    if (p->data.state == Free && p->data.size > request) // 空闲块大于分配需求
    {
      if (p->data.size - request < ch) // 剩余空间比初值还小
      {
        ch = p->data.size - request; // 更新剩余最小值
        q = p;                       // 更新最佳位置指向
      }
    }
    p = p->next;
  }
  if (q == NULL)
    return ERROR; // 没有找到空闲块
  else
  { // 找到了最佳位置并实现分配
    DLL->prior = q->prior;
    DLL->next = q;
    DLL->data.address = q->data.address;
    q->prior->next = DLL;
    q->prior = DLL;
    q->data.address += request;
    q->data.size = ch;
    return OK;
  }
}
Status FirstFit(int number, int request) // 传入作业名及申请量
{
  DuLinkList DLL = (DuLinkList)malloc(sizeof(DuLNode)); // 为申请作业开辟新空间且初始化
  DLL->data.number = number;
  DLL->data.size = request;
  DLL->data.state = Busy;
  DuLNode *p = first->next;
  while (p)
  {
    if (p->data.state == Free && p->data.size == request) // 有大小恰好合适的空闲块
    {
      p->data.state = Busy;
      p->data.number = number;
      return OK;
      break;
    }
    if (p->data.state == Free && p->data.size > request) // 有空闲块能满足需求且有剩余"
    {
      DLL->prior = p->prior;
      DLL->next = p;
      DLL->data.address = p->data.address;
      p->prior->next = DLL;
      p->prior = DLL;
      p->data.address = DLL->data.address + DLL->data.size;
      p->data.size -= request;
      return OK;
      break;
    }
    p = p->next;
  }
  return ERROR;
}
// 分 配 主 存
Status allocation(int ch)
{
  int number, request;
  printf("请输入作业(分区号):");
  scanf("%d", &number);
  printf("请输入需要分配的主存大小(单位:KB)：");
  scanf("%d", &request);
  if (request < 0 || request == 0)
  {
    printf("分配大小不合适，请重试!\n");
    return ERROR;
  }
  if (ch == 2) // 选择最佳适应算法
  {
    if (BestFit(number, request) == OK)
      printf("分配成功!\n");
    else
      printf("内存不足，分配失败!");
    return OK;
  }
  else // 默认首次适应算法
  {
    if (FirstFit(number, request) == OK)
      printf("分配成功!\n");
    else
      printf("内存不足，分配失败!");
    return OK;
  }
}

// 首次适应算法




// 释放内存
Status free(int number)
{
  DuLNode *p = first;
  while (p)
  {
    if (p->data.number == number)
    {
      p->data.state = Free;
      p->data.number = Free;
      if (p->prior->data.state == Free) // 与前面的空闲块相连
      {
        p->prior->data.size += p->data.size;
        p->prior->next = p->next;
        p->next->prior = p->prior;
      }
      if (p->next->data.state == Free) // 与后面的空闲块相连
      {
        p->data.size += p->next->data.size;
        p->next->next->prior = p;
        p->next = p->next->next;
      }
      break;
    }
    p = p->next;
  }
  return OK;
}

// 显示内存存分配情况
void show()
{

  printf("********   内 存 分 配 情 况   ********\n");

  DuLNode *p = first->next;
  while (p)
  {
    printf("分 区 号：");
    if (p->data.number == Free)
      printf("Free\n");
    else
      printf("%d\n", p->data.number);
    printf("起始地址：%ld\n", p->data.address);
    printf("分区大小：%ldKB\n", p->data.size);
    printf("状    态：");
    if (p->data.state == Free)
      printf("空 闲\n");
    else
      printf("已分配!\n");
    printf("---------------------------------------\n");
    p = p->next;
  }
}

// 主 函 数
int main()
{
  // system("color 1D");
  printf("\n");
  printf("-----------           动态内存分配管理          -----------\n");
  printf("\n");
  int ch, d = 0; // 算法选择标记
  printf("--                    1.首次适应算法                     --\n");
  printf("--                    2.最佳适应算法                     --\n");
  printf("--                    0.退出                             --\n");
  printf("\n");
  printf("-----------------------------------------------------------\n");
  printf("请选择分配算法：");
  scanf("%d", &ch);
  printf("\n");
  printf("请输入内存空间的大小(单位:KB)：");
  scanf("%ld", &MAX_length);
  printf("\n");
  if (ch == 0 || ch == 1 || ch == 2)
    d++;
  while (d == 0)
  {
    printf("数字不正确，请选择0--2之间的数字\n");
    scanf("%d", &ch);
    if (ch == 0 || ch == 1 || ch == 2)
      d++;
  }
  if (ch == 0)
    exit(0);
  if (n == 0)
    InitList();  // 开创空间表
  int selection; // 操作选择标记
  while (1)
  {
    printf("-----------           动态内存分配管理          -----------\n");
    printf("\n");
    printf("-----------    1: 分配内存      2: 释放内存     -----------\n");
    printf("-----------    3: 查看分配      0: 返    回     -----------\n");
    printf("\n");
    printf("-----------------------------------------------------------\n");
    printf("请输入您的操作 ：");
    scanf("%d", &selection);
    if (selection == 1)
    {
      allocation(ch); // 分配内存
      n++;
    }
    else if (selection == 2) // 释放内存
    {
      int number;
      printf("请输入您要释放的分区号：");
      scanf("%d", &number);
      free(number);
      n++;
    }
    else if (selection == 3)
    {
      show(); // 显示主存
      n++;
    }
    else if (selection == 0)
    {
      main(); // 退出
      n++;
    }
    else // 输入操作有误
    {
      printf("输入有误，请重试!\n");
      continue;
    }
  }
  return 0;
}
