#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
typedef struct Bags
{
    int s;
    int weight;
    int value;
} Bags;
Bags b[maxn];
bool cmp(int i,int j)
{
    return b[i].s>b[j].s;
}
int main()
{
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> b[i].value;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].weight;
        b[i].s = b[i].weight / b[i].value;
    }
    sort(b, b + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << b[i].s << endl;
        cout << b[i].value;
        cout << b[i].weight;
        cout << endl;
    }
    return 0;
}