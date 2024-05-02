/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-19
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  // a = a ^ b;
  // b = b ^ a; // 交换操作,形式就可以把a当成a^b,b就是b^a^b相同的b一起异或就是0,剩下就是a,这样实现交换
  // a = a ^ b;

  // a = a & 1; // mod2操作,奇数位1,偶数为0;
  // b = b & 1;

  // int n;
  // cin >> n;
  // a = a << n;
  // b = b >> n;     //此时左乘右除,都是2的n次方因为位中是二进制;

  // int k;
  // cin >> k;
  // a = a >> k & 1; // 取此整数的第几位,右移再与1即可;
  // b = b >> k & 1;
  cout << a << endl;
  cout << b << endl;
  return 0;
}
