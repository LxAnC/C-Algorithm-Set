// LUOGU_RID: 156571137
// Problem: D - New Friends
// LuoguUID: 514700
// LuoguUserName: MicroSun
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define fst first
#define scd second
#define rep(i, s, e) for (int i = s; i <= e; i++)
#define dep(i, s, e) for (int i = s; i >= e; i--)

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int maxn = 2e5 + 10;

struct edge
{
	int to, nxt;
} a[maxn << 1];
int head[maxn], cnt;
void add(int u, int v)
{
	a[++cnt] = {v, head[u]};
	head[u] = cnt;
}
ll cnt1;
bool vis[maxn];
void dfs(int u, int f)
{
	if (vis[u])
		return;
	vis[u] = 1;
	++cnt1;
	for (int i = head[u]; i; i = a[i].nxt)
	{
		int t = a[i].to;
		if (t != f)
			dfs(t, u);
	}
}
void solve()
{
	int n, m;
	cin >> n >> m;
	rep(i, 1, m)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	ll ans = 0;
	rep(i, 1, n)
	{
		if (!vis[i])
		{
			dfs(i, i);
			ans += cnt1 / 2.0 * (cnt1 - 1);
			cnt1 = 0;
		}
	}
	cout << ans - m;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	// cin>>t;
	while (t--)
		solve();
	return 0;
}
