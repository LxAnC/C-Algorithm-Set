//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 11:51
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e6 + 10
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define f first
#define s second
#define ma max
#define mi min
#define en '\n'
int pow(int a, int n)
{
    int q = 1;
    while (n)
    {
        if (n & 1)
            q = q * a;
        a *= a;
        n = n >> 1;
    }
    return q;
}

int n, m, x, y, z, ans;
int a[10] = {1, 3, 2, 4, 5, 2, 6, 8, 34, 9};

void Quick(int left, int right)
{
    if (left > right)
        return;
    int t = a[left];
    int i = left, j = right;
    while (i != j)
    {
        while (a[j] >= t && i < j)
            j--;
        while (a[i] <= t && i < j)
            i++;

        if (i < j)
            swap(a[i], a[j]);
    }
    a[left] = a[i];
    a[i] = t;
    Quick(left, i - 1);
    Quick(i + 1, right);
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Quick(0, 9);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
