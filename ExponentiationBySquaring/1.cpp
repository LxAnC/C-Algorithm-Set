//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-25 14:24
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
// 平方求幂环节
// 先看下面的34行

// 所以这里使用递归快速幂来求幂达到O(logn)的级别
int qpow(int a, int n)
{
   if (n == 0)
      return 1;
   else if (n % 2 == 0)
   {
      int temp = qpow(a, n / 2);
      return temp * temp;
   }
   else
      return qpow(a, n - 1) * a;
}

int main()
{
   n = 7;
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
