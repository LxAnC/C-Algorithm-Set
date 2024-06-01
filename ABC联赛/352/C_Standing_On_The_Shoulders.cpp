#include<iostream>
using namespace std;
long long n;
const long long int  maxn=1e9+5;
long long m;
long long head=-1;
long long r;

long long h=0;
int  main()
{
	int i;
	cin>>n;
	while(n--)
	{
		cin>>m>>r;
		h+=m;
		head=max(r-m,head);
	}
	cout<<h+head;
	return 0;
}