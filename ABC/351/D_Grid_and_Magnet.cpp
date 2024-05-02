#include <bits/stdc++.h>
using namespace std;

vector<int> e[1000000];
int used[1000000];
int cnt;

void dfs(int s, int v)
{
  if (used[v] == s)
    return;
  used[v] = s;
  cnt++;
  int sz = e[v].size();
  for (int i = 0; i < sz; i++)
    dfs(s, e[v][i]);
  return;
}

int main(void)
{
  int dx[4] = {0, 0, 1, -1};
  int dy[4] = {1, -1, 0, 0};
  int h, w, ans = 0;
  bool can;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
    cin >> s[i];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (s[i][j] == '#')
        continue;
      can = true;
      for (int k = 0; k < 4; k++)
      {
        if ((i + dx[k] >= 0) && (i + dx[k] < h) && (j + dy[k] >= 0) && (j + dy[k] < w))
        {
          e[i * w + j].push_back((i + dx[k]) * w + (j + dy[k]));
          if (s[i + dx[k]][j + dy[k]] == '#')
            can = false;
        }
      }
      if (!can)
      {
        e[i * w + j].clear();
        continue;
      }
    }
  }
  for (int i = 0; i < (h * w); i++)
    used[i] = -1;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if ((s[i][j] == '.') && (used[i * w + j] < 0))
      {
        cnt = 0;
        dfs(i * w + j, i * w + j);
        ans = max(ans, cnt);
      }
    }
  }
  cout << ans << endl;
}
