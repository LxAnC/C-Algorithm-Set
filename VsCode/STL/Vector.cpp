/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-29
 */
#include <bits/stdc++.h>

using namespace std;
// 今天学习一下stl的容器
// vector动态数组
//  vector为可变长数组（动态数组），定义的vector数组可以随时添加数值和删除元素。
int main()
{
   int n = 10;
   // 一维初始化
   vector<int> m;
   vector<double> f;
   vector<string> g;
   // vector<node> c;//定义了一个名为c的一维数组，数组存储结构体类型数据，node是结构体类型

   // 初始化和长度
   vector<int> a(n);
   vector<int> b(n, 1);//这就是定义了一个长度为n,初始化值为1的vector

   //包含元素的动态数组
   vector<int>c{1,2,3,4,5};//初始化包含元素的数组
   for(auto x:c)
   cout<<x<<endl;
   return 0;
}
