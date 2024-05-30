//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-25 14:24
//
// 20240528复习
#include <bits/stdc++.h>
using namespace std;
#define N 1e5 + 5
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define Mod 1000000007 // 一般题目会给一个数据
#define max ma
#define min mi
typedef long long ll;
int n, m, x, y, z, ans;
// 平方求幂环节
// 先看下面的34行

// 所以这里使用递归快速幂来求幂达到O(logn)的级别
int qpow(int a, int n)
{
   if (n == 0)
      return 1;
   else if (n % 2 == 0) // 如果偶数直接拆分
   {
      int temp = qpow(a, n / 2);
      return temp * temp;
   }
   else
      return qpow(a, n - 1) * a; // 不是偶数就单独乘一个再拆分
}
// 一般题目中由于太大都会取模一个数,例如：

ll qpow1(ll a, ll n)
{
   if (n == 0)
      return 1;
   else if (n % 2 == 1)
      return qpow(a, n - 1) * a % Mod;
   else if (n % 2 == 0)
   {
      int temp = qpow(a, n / 2) % Mod;
      return temp * temp % Mod;
   }
}
// 递归虽然简洁，但是很费时间
//  这里我们用非递归的方式举例
ll qpow2(ll a, ll n)
{
   if (n == 0)
      return 1;
   int ret = 1;
   while (n)
   {
      if (n & 1)
         return ret = ret * a;
      a = a * a;
      n = n >> 1;
   }
   return ret;
}
// 20240529复习
int main()
{
   n = 7;
   cout << qpow2(n, 10) << endl;
   // 求n的10次方
   // 方法一
   //  cout<<n*n*n*n*n*n*n*n*n*n<<endl;
   // 上述方法会算10次

   // 方法二
   //  int b=n*n*n*n*n;
   //  cout<<b*b;
   // 上述方法会算5次

   // 方法三
   //  int c=n*n;
   //  int b=c*c*n;
   //  cout<<b*b<<endl;
   // 只用算四次
   // 转上

   return 0;
}
