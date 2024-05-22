#include<iostream>
using namespace std;

int n,m,k;
const int maxn=5e3+10;
int f[maxn][maxn];
int pre[maxn];
int root(int i)
{
    return pre[i]==i?i:pre[i]=root(i);
}
void init()
{
    for(int i=1;i<=n;i++)
    {
        f[i]
    }

}
int main()
{
    init();
    root();
    cin>>n>>m;




    for(int i=1;i<=k;i++){
        int z,y;
        cin>>z>>y;
        cout<<f[z][y]<<endl;
    }
    return 0;
}