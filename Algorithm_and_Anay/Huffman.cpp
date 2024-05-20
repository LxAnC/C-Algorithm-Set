#include <bits/stdc++.h>
using namespace std;
int N = 10; // 节点数
const int maxn = 1e5 + 10;
typedef struct
{
    int weight;
    int lch, rch, parent;
    char data;
} hNode, *huffmanTree;
typedef char** huffmanCode;
int inithuffmanTree(huffmanTree &ht); // h
void createhuffmanTree(huffmanTree &ht, int n);
void createhuffmanCode(huffmanTree ht, huffmanCode &hc, int n);
int main()
{
    huffmanTree ht;
    inithuffmanTree(ht);
    huffmanCode hc;
    createhuffmanTree(ht, N);
    createhuffmanCode(ht, hc, N);
    for (int i = 1; i <= N; i++)
    {
        cout << ht[i].data << '\t';
        cout << hc[i];
    }
    
    return 0;
}
int inithuffmanTree(huffmanTree &ht)
{
    ht=new hNode[N*2+1];
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        ht[i].parent = ht[i].lch = ht[i].rch = -1; // 设为-1
    }
    for (int i = 1; i <= N; i++)
    {
        cout << "请输入节点" << endl;
        cin >> ht[i].data;
        cout << "请输入每个权值" << endl;
        cin >> ht[i].weight;
    }
    return 0;
}
// 队列优化
void createhuffmanTree(huffmanTree &ht, int n)
{
    if(n<=1)
    return ;
    int min1, min2;
    int rpos, lpos;
    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        min1 = INT_MAX;
        min2 = INT_MAX;
        for (int j = 1; j <= i-1; j++)
        {
            if (ht[j].weight < min1 && ht[j].parent == -1)
            {
                min2 = min1;
                rpos = lpos;
                min1 = ht[j].weight;
                lpos = j;
            }
            else if (ht[j].weight < min2 && ht[j].parent == -1)
            {
                min2 = ht[j].weight;
                rpos = j;
            }
        }
        ht[i].weight = min1 + min2;
        ht[i].rch = rpos;
        ht[i].lch = lpos;
        ht[rpos].parent = ht[lpos].parent = i;
    }
}
void createhuffmanCode(huffmanTree ht, huffmanCode &hc, int n)
{
    hc=new char *[N*2+1];
    int start = 0, c = 0, f = 0;
    char *code = new char[N+1];
    for (int i = 1; i <= n; i++)
    {
        start = n - 1;
        c = i;
        f = ht[c].parent;
        while (f != -1)
        {
            start--;
            if (ht[f].lch == c)
                code[start] = '0';
            else
                code[start] = '1';
            // 依次逼近根
            c = f;
            f = ht[c].parent;
        }
        // 更新
        strcpy(hc[i], &code[start]);
    }
    delete[] code;
}