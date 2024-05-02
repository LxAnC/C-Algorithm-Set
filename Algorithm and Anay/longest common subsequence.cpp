/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-24
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printLCS(const vector<vector<int>> &dp, const vector<int> &X, const vector<int> &Y, int m, int n)
{
  if (m == 0 || n == 0)
  {
    return;
  }
  if (X[m - 1] == Y[n - 1])
  {
    printLCS(dp, X, Y, m - 1, n - 1);
    cout << X[m - 1] << " ";
  }
  else if (dp[m - 1][n] >= dp[m][n - 1])
  {
    printLCS(dp, X, Y, m - 1, n);
  }
  else
  {
    printLCS(dp, X, Y, m, n - 1);
  }
}

int main()
{
  vector<int> X = {1, 2, 3, 4, 5};  // 第一个整型数组
  vector<int> Y = {2, 3, 5, 7, 11}; // 第二个整型数组

  int m = X.size();
  int n = Y.size();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (X[i - 1] == Y[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  cout << "最长公共子序列是: ";
  printLCS(dp, X, Y, m, n);
  cout << endl;

  return 0;
}