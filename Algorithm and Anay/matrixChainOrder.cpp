/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
#include <bits/stdc++.h>
using namespace std;
int matrixChainOrder(const vector<int>& p) {
    int n = p.size() - 1; 
    vector<vector<int>> m(n, vector<int>(n, 0)); 
    for (int l = 2; l <= n; ++l) {
        for (int i = 0; i < n - l + 1; ++i) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                int q = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (q < m[i][j]) {
                    m[i][j] = q;
                }
            }
        }
    }
    return m[0][n - 1];
}

int main() {
    vector<int> p = {30, 35, 15, 5, 10, 20, 25};
    cout << "最少乘法次数为: " << matrixChainOrder(p) << endl;
    return 0;
}