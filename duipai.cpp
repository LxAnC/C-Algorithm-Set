#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct _timeb T;
    -ftime(&T);
    srand(T.millitm);
    cout << rand() << endl;
}