#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
#define maxn 10005
int n, m;
int x, y, z;
int i;

unordered_map<string, int> nums(maxn);
unordered_map<string, bool> ifs(maxn);

int main()
{
    cin >> n >> m;
    int x = 0, y = 0;
    string A, B;
    for (int i = 1; i <= n; i++)
    {
        cin >> A;
        transform(A.begin(), A.end(), A.begin(), ::tolower);
        if (nums[A] == 0)
            y++;
        nums[A] += 1;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> A;
        transform(A.begin(), A.end(), A.begin(), ::tolower);
        if (nums[A] != 0 && ifs[A] == false)
        {
            x++;
            ifs[A] = true;
        }
        else if (nums[A] == 0)
           { y++;nums[A]++;}
    }
    cout << x << endl;
    cout << y << endl;
    return 0;
}