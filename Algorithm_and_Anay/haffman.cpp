#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+2;
int n=10;
typedef struct{
	char data;
	int weight;
	int lch,rch,parent;
}hNode,*HuffmanTree;
typedef char** HuffmanCode;
int initHuffmanTree(HuffmanTree &ht)
{
	for(int i=1;i<=n;i++)
	  {
		cin>>ht[i].data;
		cin>>ht[i].weight;
	  }
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	HuffmanTree ht;

	inithuffmanCode();
	createHuffmanTree();
}