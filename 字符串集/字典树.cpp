//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-29 15:33
//
#include <bits/stdc++.h>
using namespace std;
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi

int n, m, x, y, z, ans, tot;
int trie[10000][26];
char ch[N];
int word[N];
void insert(char s[])
{
    int u = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        word[u]++;
        int c = s[i] - 'a';
        if (trie[i][u] == 0)
            trie[i][u] = ++tot; // 添加节点
        u = trie[i][u];         // 更新下一个节点
    }
    word[u]++;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> ch;
        insert(ch);
    }
    for(int i=1;i<=tot;i++)
    ans+=word[i]*(word[i]-1/2);

    return 0;
}

// 字典树的学习
