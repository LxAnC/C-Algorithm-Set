#include<bits/stdc++.h>
using namespace std;
int N=10;//节点数
const int maxn=1e5+10;
typedef struct  {
    int weight;
    int lch,rch,parent;
    int data;
}hNode,*huffmanTree;
typedef  char** huffmanCode;
int inithuffmanTree(huffmanTree &ht);//h
void createHuffmanTree(huffmanTree &ht,int n);
void createHuffmanCode(huffmanTree &ht,huffmanCode &hc,int n)
int main()
{
    
}