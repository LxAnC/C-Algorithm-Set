#include<bits/stdc++.h>
using namespace std;
const int MaxVal = 9999;
const int n = 5;
//搜索到根节点和伪节点的概率
double p[n + 1] = {-1,0.15,0.1,0.05,0.1,0.2};
double q[n + 1] = {0.05,0.1,0.05,0.05,0.05,0.1};
 
int root[n + 1][n + 1];//记录根节点
double w[n + 2][n + 2];//子树概率总和
double e[n + 2][n + 2];//子树期望代价
bool solve()
{
    //首先构造每个节点自己
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
          root[i][j]=i;
    }
}
int main()
{
    solve();
    return 0;
}
