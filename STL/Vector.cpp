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
   vector<int> b(n, 1); // 这就是定义了一个长度为n,初始化值为1的vector

   // 包含元素的动态数组
   vector<int> c{1, 2, 3, 4, 5}; // 初始化包含元素的数组
   // for(auto x:c)
   // cout<<x<<endl;

   vector<int> o[5]; // 定义一个二维数组,第一维固定长度为5第二维可变

   vector<vector<int>> nums; // 定义一个行和列都可变的数组
   nums.push_back({1, 2, 3, 4, 5});
   // 还可以直接push一个数组
   // 固定长度的初始化二维
   vector<vector<int>> p(n + 1, vector<int>(n + 2)); // 固定格式
   vector a(n + 1, vector(n + 1, 0));                // 这是c++17和c++20支持的格式但是不常用

   // 一些基本的方法函数
   //  这里以a数组为例
   a.front();                             // 返回第一个数据O ( 1 )
   a.end();                               // 删除最后一个数据O ( 1 )
   a.back();                              // 返回数组中的最后一个数据 O ( 1 )
   a.pop_back();                          // 删除最后一个数据O ( 1 )
   a.push_back(2);                        // 在尾部加一个数据O ( 1 )
   a.size();                              // 返回实际数据个数（unsigned类型）O ( 1 )
   a.clear();                             // 清除元素个数O ( N ) ，N为元素个数
   a.resize(20);                          // 只重置数组的长度空间,没有改变其值多删少补
   a.resize(2, 4);                        // 改变数组的大小为2,里面的元素为4
   a.insert(a.begin() + 1, 2);            // 在第第二个位置插入2 Order(2)
   a.erase(a.begin() + 1, a.begin() + 2); // 删除[first,last)的所有元素，O ( N ) O(N)O(N)
   a.erase(a.begin() + 3);                // 删除下标为3的数据
   a.empty();                             // 判断是否为空O(1);
   sort(a.begin(), a.end());              // 排序函数n*log2n
   ranges::sort(a);
   return 0;
}
