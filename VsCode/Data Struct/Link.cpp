/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
//手搓一个单链表
#include <bits/stdc++.h>

using namespace std;

typedef struct LinkNode{
  int data;
   LinkNode *next;
}*a;
int main()
{
   //构造一个单链表
  a n=new LinkNode;
  a n1=new LinkNode;
  n1->data=3;
  n->data=2;
  n->next=n1;

   cout<<n->next->data<<endl;
   return 0;
}
