#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 6;
int w[maxn];
float v[maxn];
float s[maxn];
int m;
int n, bags;
int main()
{
    cin >> n >> bags;
    for (int i = 0; i <n; i++)
        cin >> v[i];
    for (int i = 1; i <n; i++)
    {cin >> w[i];s[i]=w[i]/v[i];}
    sort(v,v+n,[&](int i,int j){
        return s[i]>s[j]?swap(s[i],s[j]):0;
    });
    // sort(w,w+n,[&](int i,int j){
    //     return s[i]>s[j];
    // });
    // sort(s,s+n,[&](int i,int j){
    //     return s[i]>s[j];
    // });
    int c = bags;
    float ret = 0;
    int i;
    for (i = 0; i <n&&c!=0; i++)
    {
        if (c > w[i])
        {
            ret += v[i];
            c -= w[i];
        }
        else
            break;
    }
    for(int i=0;i<n;i++)
    cout<<s[i]<<" "<<w[i]<<" "<<v[i]<<endl;
    //装满的时候
    cout<<ret<<endl;
    cout<<s[i]<<endl;
    if (i <= n&&c!=0)
        ret += c * s[i];
    cout << "最大价值" << endl;
    cout << ret << endl;
    cout << "最后一次容量" << c << endl;
    return 0;
}