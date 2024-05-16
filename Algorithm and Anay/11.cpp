#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>s{1,2,3,4,5,8,7,6,4,2};
//大佬说要设置提示的标准
    ranges::sort(s);
    for(auto x:s)
    cout<<x<<endl;//输出结果正确
    cout<<__cplusplus<<endl;
    //20240517留
}