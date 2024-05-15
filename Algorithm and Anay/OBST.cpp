#include <bits/stdc++.h>
using namespace std;
void optimalBST(vector<double> &p, vector<double> &q, int n, vector<vector<double>> &e, vector<vector<int>> &root)
{
    vector<vector<double>> w(n + 2, vector<double>(n + 1, 0));
    // 初始化 e 和 w
    for (int i = 1; i <= n + 1; ++i)
    {
        e[i][i - 1] = q[i - 1];
        w[i][i - 1] = q[i - 1];
    }
    for (int l = 1; l <= n; ++l)
    {
        for (int i = 1; i <= n - l + 1; ++i)
        {
            int j = i + l - 1;
            e[i][j] = numeric_limits<double>::infinity();
            w[i][j] = w[i][j - 1] + p[j] + q[j];
            for (int r = i; r <= j; ++r)
            {
                double t = e[i][r - 1] + e[r + 1][j] + w[i][j];
                if (t < e[i][j])
                {
                    e[i][j] = t;
                    root[i][j] = r;
                }
            }
        }
    }
}

void printOptimalBST(vector<vector<int>> &root, int i, int j, int parent, bool isLeft)
{
    if (i > j)
    {
        if (isLeft)
        {
            cout << "d" << j << " 是k的左孩子" << parent << endl;
        }
        else
        {
            cout << "d" << i - 1 << "是k的右孩子" << parent << endl;
        }
        return;
    }
    int r = root[i][j];
    if (parent == -1)
    {
        cout << "k" << r << " 是根节点" << endl;
    }
    else if (isLeft)
    {
        cout << "k" << r << "k的左孩子" << parent << endl;
    }
    else
    {
        cout << "k" << r << " 是k的右孩子" << parent << endl;
    }
    printOptimalBST(root, i, r - 1, r, true);
    printOptimalBST(root, r + 1, j, r, false);
}

int main()
{
    vector<double> p = {0, 0.15, 0.10, 0.05, 0.10, 0.20};    // p[0]
    vector<double> q = {0.05, 0.10, 0.05, 0.05, 0.05, 0.10}; // q[0]
    int n = p.size() - 1;
    vector<vector<double>> e(n + 2, vector<double>(n + 1, 0));
    vector<vector<int>> root(n + 1, vector<int>(n + 1, 0));//用来构造根
    optimalBST(p, q, n, e, root);
    cout << "最优的搜索次数为" << e[1][n] << endl;
    printOptimalBST(root, 1, n, -1, false);

    return 0;
}
