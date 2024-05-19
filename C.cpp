#include<iostream>
using namespace std;
int main()
{
    int ret=0;
    string x;
    cin>>x;
    int n=x.length();
    for(int i=0;i<n;i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        ret++;
    }
    
    cout<<ret;
    return 0;
}