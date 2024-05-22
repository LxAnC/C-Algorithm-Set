#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
typedef struct Bags
{
    double s;
    int weight;
    int value;
} Bags;

int main()
{
    int n, m;
    Bags b[maxn];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> b[i].value;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].weight;
        b[i].s = b[i].weight / b[i].value;
    }
    sort(b, b + n, [b](int i,int j){
        return b[i].s>b[j].s
    });
    for(int i=0;i<n;i++)
    
}