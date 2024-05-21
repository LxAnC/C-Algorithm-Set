#include <iostream>
#define int long long
using namespace std;
const int maxn = 1e5 + 10;

int n = 4;


void dijkstra(){
    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int graph[][4] = {
        0, 2, -1, 6,
        2, 0, 3, 2,
        -1, 3, 0, 2,
        6, 2, 2, 0}; // 初始化图
    dijkstra();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }
}