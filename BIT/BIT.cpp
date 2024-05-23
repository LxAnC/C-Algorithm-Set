// 树状数组（Binary Index Tree, BIT）也是很多OIer心中最简洁优美的数据结构之一。
// 最简单的树状数组支持两种操作，时间复杂度均为
// 单点修改：更改数组中一个元素的值
// 区间查询：查询一个区间内所有元素的和
// 当然，树状数组能维护的不局限于加法，支持的操作也不止这两种，甚至有大佬能用树状数组实现平衡树
// https://zhuanlan.zhihu.com/p/93795692
// 还有这篇https://www.cnblogs.com/Last--Whisper/p/13823614.html#%E4%BB%80%E4%B9%88%E6%98%AF-bit-
// https://blog.csdn.net/TheWayForDream/article/details/118436732
int tree[MAXN];
inline void update(int i, int x)
{
    for (int pos = i; pos < MAXN; pos += lowbit(pos))//这里对分别的阵营做更新
        tree[pos] += x;//表示0-pos的总人数
}
inline int query(int n)
{
    int ans = 0;
    for (int pos = n; pos; pos -= lowbit(pos))//遍历所有区域的总人数
        ans += tree[pos];//分别把各段的加起来
    return ans;
}
inline int query(int a, int b)
{
    return query(b) - query(a - 1);//因为b-a+1是总距离，所以b-  a-1就是合理的减数
}
int main()
{
    int cases;
    scanf("%d", &cases);
    for (int I = 1; I <= cases; ++I)
    {
        memset(tree, 0, sizeof(tree));
        int n, x, a, b;
        char opr[10];
        printf("Case %d:\n", I);
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &x);
            update(i, x);
        }
        while (scanf("%s", opr), opr[0] != 'E')
        {
            switch (opr[0])
            {
            case 'A':
                scanf("%d%d", &a, &b);
                update(a, b);
                break;
            case 'S':
                scanf("%d%d", &a, &b);
                update(a, -b);
                break;
            case 'Q':
                scanf("%d%d", &a, &b);
                printf("%d\n", query(a, b));
            }
        }
    }
    return 0;
}