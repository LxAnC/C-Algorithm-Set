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
   // for(auto x:c)
   // cout<<x<<endl;

   vector<int>o[5];//定义一个二维数组,第一维固定长度为5第二维可变

   vector<vector<int>>nums;//定义一个行和列都可变的数组
   nums.push_back({1,2,3,4,5});
   //还可以直接push一个数组
   //固定长度的初始化二维
   vector<vector<int>>p(n+1,vector<int>(n+2));//固定格式
   vector a(n+1,vector(n+1,0));//这是c++17和c++20支持的格式但是不常用
   
   return 0;
}
