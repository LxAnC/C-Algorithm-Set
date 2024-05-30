//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-30 23:36
//
#include <bits/stdc++.h>
using namespace std;
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)

#define max ma
#define min mi
int n, m, x, y, z, ans;
int cnt = 0;
int main()
{
    cin >> n;
    string s;
    int c;
    int s = 0;
    vector<pair<string, int>> a(n);
    for (auto &i : a)
    {
        cin >> i.first;
        cin >> i.second;
        s += i.second;
    }
    vector<int> id(n);
    iota(id.begin(), id.end(), 0);
    sort(id.begin(), id.end(), [&](int x, int y)
         { return a[x].first < a[y].first; });
    int win = id[s % n];
    cout << a[win].first;
    return 0;
}
