//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-26 22:55
//
#include <bits/stdc++.h>
using namespace std;
#define N 1e5 + 5
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi

int n, m, x, y, z, ans;
set<string> s1;
set<string> s2;
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        s1.insert(s);
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        s2.insert(s);
    }
    int num1 = 0, num2 = 0;
    for (auto it : s1)
    {
        auto it1 = s2.lower_bound(it);
        if (it1 != s2.end() && (*it1) == (it))
            num1++;
    }
    for (auto it : s2)
    {
        s1.insert(it);
    }
    num2 = s1.size();
    cout << num1 << " " <<endl<< num2 << endl;

    return 0;
}
