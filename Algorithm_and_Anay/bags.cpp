#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
typedef struct Bags
{
    double s;
    int weight;
    int value;
} Bags;
Bags b[maxn];
bool cmp(Bags s1, Bags s2)
{
    return s1.s > s2.s;
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
        b[i].s = (double)b[i].value / b[i].weight;
    }
    sort(b, b + n, cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << b[i].s << " ";
    //     cout << b[i].value << " ";
    //     cout << b[i].weight;
    //     cout << endl;
    // }
    int c = m;
    double ret = 0.0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (c >= b[i].weight)
        {
            ret += b[i].value;
            c -= b[i].weight;
        }
        else
            break;
    }
    if (i < n &&c!=0)
    ret+=c*b[i].s;
    cout<<ret;
        return 0;
}