#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n / 2;
    if (n == k * 2)
    {
        cout << k << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}