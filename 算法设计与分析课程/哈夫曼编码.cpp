// #include <bits/stdc++.h>
// using namespace std;
// const int maxn = 1e5 + 2;
// int n = 10;
// typedef struct
// {
//     char data;
//     int weight;
//     int lch, rch, parent;
// } hNode, *HuffmanTree;
// typedef char **HuffmanCode;
// int initHuffmanTree(HuffmanTree &ht)
// {
//     ht = new hNode[n * 2];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> ht[i].data;
//         cin >> ht[i].weight;
//         ht[i].lch = ht[i].rch = ht[i].parent = -1;
//     }
// }
// void createHuffmanTree(HuffmanTree &ht, int n)
// {

//     if (n <= 1)
//         return;
//     int min1, min2;
//     int lpos, rpos;
//     for (int i = n + 1; i <= 2 * n - 1; i++)
//     {
//         min1 = min2 = INT_MAX;
//         for (int j = 1; j <= i - 1; j++)
//         {
//             if (ht[j].weight < min1 && ht[j].parent == -1)
//             {
//                 min2 = min1;
//                 lpos = j;
//                 min1 = ht[j].weight;
//             }
//             else if (ht[j].weight < min2 && ht[j].parent == -1)
//             {
//                 min2 = ht[j].weight;
//                 rpos = j;
//             }
//         }
//         ht[i].lch = lpos;
//         ht[i].rch = rpos;
//         ht[i].weight = min1 + min2;
//         ht[rpos].parent = ht[lpos].parent = i;
//     }
//     return;
// }
// void createHuffmanCode(HuffmanTree ht, HuffmanCode &hc, int n)
// {
//     int start = 0;
//     int c = 0;
//     int f = 0;
//     hc = new char *[n * 2];
//     char *code = new char[n * 2];
//     code[n - 1] = '\0';
//     for (int i = 1; i <= n; i++)
//     {
//         start = n - 1;
//         c = i;
//         f = ht[i].parent;
//         while (f != -1)
//         {
//             start--;
//             if (ht[i].lch == c)
//                 code[start] = '0';
//             else
//                 code[start] = '1';
//             f = ht[i].parent;
//         }
//         hc[i] = new char[n - start];
//         strcpy(hc[i], &code[start]);
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     HuffmanTree ht;
//     initHuffmanTree(ht);
//     createHuffmanTree(ht, n);
//     HuffmanCode hc;
//     createHuffmanCode(ht, hc, n);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << ht[i].data << "\t";
//         cout << hc[i] << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m;

typedef struct node
{
    char data;
    int weight;
    int rch, lch;
    int parent;

} Hnode, *HuffmanTree;

typedef char **HuffmanCode;
void initHuffmanTree(HuffmanTree &ht)
{
    ht = new Hnode[n * 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> ht[i].data >> ht[i].weight;
        ht[i].rch = ht[i].lch = ht[i].parent = -1;
    }
}
void createHuffmanTree(HuffmanTree ht, int n)
{
    if (n <= 1)
        return;
    int min1, min2;
    int lpos, rpos;
    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        min1 = min2 = INT_MAX;
        for (int j = 1; j <= i - 1; j++)
        {
            if (ht[j].weight < min1 && ht[j].parent == -1)
            {
                min2 = min1;
                min1 = ht[j].weight;
                lpos = j;
            }
            else if (ht[j].weight < min2 && ht[j].parent == -1)
            {
                min2 = ht[j].weight;
                rpos = j;
            }
            ht[i].weight = min1 + min2;
            ht[i].lch = lpos;
            ht[i].rch = rpos;
            ht[rpos].parent = ht[lpos].parent = i;
        }
    }
}
void createHuffmanCode(HuffmanTree ht, HuffmanCode &hc, int n)
{
    int start = 0;
    int f = 0;
    int c = 0;
    hc = new char *[n * 2+1];
    char *code = new char[n * 2+1];
    code[n - 1] = '\0';
    for (int i = 1; i <= n; i++)
    {
        start = n - 1;
        f = ht[i].parent;
        c = ht[i].weight;
        while (f != -1)
        {
            start--;
            if (ht[f].rch == c)
                code[start] = '1';
            else
                code[start] = '0';
            f = ht[f].parent;
        }
        hc[i] = new char[n-start];
        strcpy(hc[i], &code[start]);
    }
}
int main()
{
    cin >> n;
    HuffmanTree ht;
    initHuffmanTree(ht);
    HuffmanCode hc;
    createHuffmanTree(ht, n);
    createHuffmanCode(ht, hc, n);
    for (int i = 1; i <= n; i++)
    {
        cout << ht[i].data << "   ";
        cout << hc[i];
        cout << endl;
    }
    return 0;
}