// //
// //* @Author: LxAnC
// //* @Email : LxAnC76@gmail.com
// //* @Date  : 2024-05-29 14:50
// //
// #include <bits/stdc++.h>
// using namespace std;
// #define N 10005
// #define f1(i) for (int i = 1; i <= n; i++)
// #define f2(i) for (int i = n; i; i--)
// #define first f
// #define second s
// #define max ma
// #define min mi
// // 只用排序一下，做相同就行
// int n, m, x, y, z, ans;
// string a[N];
// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a + 1, a + n + 1);
//     for (int i = 1; i <= n - 1; i++)
//         for (int j = i + 1; j <= n; j++)
//         {
//             if(a[i][0]!=a[j][0])
//             break;
//             int len=1;
//             int z = 1;
//             while (a[i][z] == a[j][z])
//             {
//                 len++;z++;
//             }
//             ans+=len;
//         }
//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;
#define ll long long
int n, tot;
char s[N];
int trie[N][50];
ll ans, word[N];
void insert(char c[])
{
    int u = 0;
    int len = strlen(c);
    for (int i = 0; i < len; i++)
    {
        word[u]++;
        int a = c[i] - 'a';
        if (trie[u][a] == 0)
        {
            trie[u][a] = ++tot;
        }
        u = trie[u][a];
    }
    word[u]++;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        insert(s);
    }
    for (int i = 1; i <= tot; i++)
    {
        ans += word[i] * (word[i] - 1) / 2;
    }
    cout << ans;
    return 0;
}