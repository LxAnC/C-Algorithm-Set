/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
//手搓一个单链表
#include <bits/stdc++.h>
// typedef  i;
using namespace std;
//定义数据结构
typedef struct LinkNode{
   int data;
   struct LinkNode *next;
}*Linknode;

void printLink(LinkNode* &a)
{
  Linknode p=new LinkNode;
  Linknode ptr=a->next;
  while(ptr!=nullptr)
  {
    cout<<ptr->data<<' ';
    ptr=ptr->next;
  }
}
 LinkNode CreateLink()
 {
    LinkNode* head=nullptr;
    LinkNode* tail=nullptr;
    int x;
    while(cin>>x)
    {
        Linknode a1=new LinkNode;
        if(a1!=nullptr)
       { a1->data=x;
        a1->next=nullptr;}
        tail->next=a1;
        tail=a1;
    }
    printLink()
 }



int main()
{
   //构造一个单链表
    CreateLink();
   return 0;
}
