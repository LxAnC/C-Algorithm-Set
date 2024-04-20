/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-18
 */
// 手搓一个单链表
#include <bits/stdc++.h>
// typedef  i;
using namespace std;
// 定义数据结构
typedef struct LinkNode
{
   int data;
   struct LinkNode *next;
} *Linklist, LinkNode;
void PrintList(LinkNode *p)
{  
   if(p==nullptr)
   {
      cout<<"为空,打印失败"<<endl;
      return ;
   }
   LinkNode *a=new LinkNode;
   a=p->next;
   cout<<"打印如下"<<endl;
   while(a!=nullptr)
   {
      cout<<a->data<<' ';
      a=a->next;
   }

}
void InsertNode(LinkNode *p)
{
   int x,n;
   cout<<"请输入插入的数字个数";
   cin>>n;
   while(n--)
   {LinkNode *new1 = new LinkNode;
   cin>>x;
   new1->data=x;
   new1->next=nullptr;
   p->next=new1;
   p=p->next;
   }
}
LinkNode *CreateLink()
{
   LinkNode *L = new LinkNode;
   if (L == nullptr)
      cout << "分配错误" << endl;
   else
   {
      cout << "分配成功" << endl;
      
   }
   L->next=nullptr;
   return L;
}

int main()
{
   // 构造一个单链表
   LinkNode *p = CreateLink();
   InsertNode(p);
   PrintList(p);
   return 0;
}
