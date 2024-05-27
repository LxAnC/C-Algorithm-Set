//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-27 15:06
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

int n, m, x, y, z, ans;
int a[N];
int ret = -1;
int f;
int main()
{
    cin >> n;
    cin >> f;
    a[1] = f;
    for (int i = 2; i <= n; i++)
        cin >> a[i];
    int i = 2;
    for (int i = 2; i <= n; i++)
        if (a[i] > f)
           { cout << i << endl;
            return 0;}
    cout<< -1<<endl;

    return 0;
}
