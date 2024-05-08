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
  cin >> n >> k;

  vector<int> P(n);
  int p;
  for (int i = 0; i < n; i++)
  {
    cin >> p;//这里是
    p--;
    P[p] = i;
  }

  set<int> S;
  for (int i = 0; i < k; i++)
  {
    S.insert(P[i]);
  }

  int ans = *S.rbegin() - *S.begin();

  for (int i = k; i < n; i++)
  {
    S.erase(P[i - k]);
    S.insert(P[i]);
    ans = min(ans, *S.rbegin() - *S.begin());
  }

  cout << ans << endl;
  return 0;
}