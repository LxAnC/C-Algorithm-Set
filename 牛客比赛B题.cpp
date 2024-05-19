#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int x;
    cin >> x;
    int t1 = sqrt(x);
    int t2 = (ceil(sqrt(x)));
    if(t1 *t1 == x){
        cout << 0;
        return 0;
    }
    if(abs(t1 - x) % 2 == 0){
        cout << abs(x - t1*t1) / 2;
    }else{
        cout << abs(t2*t2 - x) / 2;
    }
}