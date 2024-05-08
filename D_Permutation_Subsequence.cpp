#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k; // 先输入最先的数字,k为序列个数
  vector<int> P(n);
  int p;
  for (int i = 0; i < n; i++)
  {
    cin >> p; // 这里是
    p--;
    P[p] = i;
  }

  set<int> S;
  for (int i = 0; i < k; i++)
  {
    S.insert(P[i]); // 插入他们的位置
  }

  int ans = *S.rbegin() - *S.begin(); // 算出最开始的值

  for (int i = k; i < n; i++)
  {
    S.erase(P[i - k]); // 使用这两个来更新值
    S.insert(P[i]);
    ans = min(ans, *S.rbegin() - *S.begin()); // 更新最小索引差值
  }

  cout << ans << endl;
  return 0;
}