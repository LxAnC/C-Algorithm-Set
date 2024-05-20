#include<bits/stdc++.h>
using namespace std;
int N=10;//节点数
const int maxn=1e5+10;
typedef struct huffmanTree {
    int weight;
    int lch,rch,parent;
    int data;
}hNode,*huffmanTree;

