#include <iostream>
using namespace std;

int n, m;
const int maxn = 1e3 + 10;
int pre[maxn]; // 祖先
int root(int i)
{
    return pre[i] == i ? i : pre[i] = root(pre[i]);
}
void init()
{
    for (int i = 1; i <= n; i++)
    {
        pre[i] = i;
    }
}
void merge(int x, int y)
{
    pre[root(x)] = root(y);
}
bool find(int x, int y)
{
    return root(x) == root(y);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    init();

    for (int i = 1; i <= m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 2)
          {  cout << (find(y, z)?"Y":"N")<< endl;}
        else if (x == 1)
            merge(y, z);
    }
    return 0;
}
/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-04
 */
// #include <bits/stdc++.h>

// using namespace std;
// // https://www.luogu.com.cn/problem/P3367
// const int Max = 1e4 + 10;
// int prex[Max];
// int n, m;
// int root(int x)
// {
//    return prex[x] == x ? x : prex[x] = root(prex[x]);
// }
// void init(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       prex[i] = i; // 初始化每个结点的祖先结点都是自己
//    }
// }
// void Merge(int x, int y)
// {
//   prex[root(x)]=root(y);
// }
// bool iscon(int x, int y)
// {
//    return root(x) == root(y);
// }
// int main()
// {
//    ios::sync_with_stdio(0);
//    cin >> n >> m;
//    init(n);
//    while (m--)
//    {
//       int x, y, z;
//       cin >> z >> x >> y;
//       if (z == 1)
//       {
//          Merge(x, y);
//       }
//       else
//       {
//          cout << (iscon(x, y) == 1 ? "Y" : "N") << endl;
//       }
//    }
//    return 0;
// }
