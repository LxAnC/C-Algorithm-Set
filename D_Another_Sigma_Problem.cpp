#include <cstdio>

const int MAXN = 2e5 + 5;
const long long int mod = 998244353;
int n;
long long int ans, a[MAXN], suf[MAXN], suf2[MAXN]; // 用两个数组分别存储两部分答案
inline long long int get_len(long long int x); // 获取数字长度

int main(void)
{
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
	}
	
	for (int i = n; i >= 2; i--)
	{
		suf[i] = (suf[i + 1] + a[i]) % mod; // 计算时记得取模
		suf2[i] = (suf2[i + 1] + get_len(a[i])) % mod; // 同上
	}
	
	for (int i = 1; i < n; i++)
	{
		ans += suf[i + 1];
		ans += a[i] * suf2[i + 1] % mod;
		ans %= mod; // 根据上面的余数可加性，记得每次都取个模
	}
	
	printf("%lld\n", ans);
	return 0;
}

inline long long int get_len(long long int x)
{
	long long int len = 1;
	
	while (x > 0)
	{
		len = len * 10 % mod, x /= 10;
	}
	
	return len;
}
