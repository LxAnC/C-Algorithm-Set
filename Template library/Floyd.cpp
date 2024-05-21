#include <iostream>
#include <climits>
using namespace std;
int ret = 0;
int n=6;
const int maxn = 1e3 + 10;
const int max1 = 66666;
int graph[maxn][maxn] = {
    {0, 2, 3, 6, max1, max1},
    {2, 0, max1, max1, 4, 6},
    {3, max1, 0, 2, max1, max1},
    {6, max1, 2, 0, 1, 3},
    {max1, 4, max1, 1, 0, max1},
    {max1, 6, max1, 3, max1, 0}};
; // 图论的数组
void floyd()
{
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (graph[i-1][j-1] != INT_MAX)
                for (int k = 1; k <= n; k++) // 中间节点
                    if (graph[i-1][j-1] + graph[j-1][k-1] < graph[i-1][k-1])
                        graph[i-1][k-1] = graph[i-1][j-1] + graph[j-1][k-1];
        }
    }
    return;
}
int main()
{
    floyd();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << graph[i-1][j-1] << " ";
        cout << endl;
    }
    return 0;
}