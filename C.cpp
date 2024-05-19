#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0, d = 0, res = 1e9;
    for (int i = 0; i < s.size(); i++)
        c += s[i] <= 'Z';
    for (int i = 0; i < s.size() - 1; i++)
    {
        d += s[i] >= 'a'; // cout<<i-d+1<<endl;
        res = min(res, d + c - (i - d + 1));
    }
    cout << res << endl;
}