#include <iostream>
// #include <math>
#include <algorithm>
using namespace std;

int ChebyshevDistance(int x1, int x2, int y1, int y2)
{
    return max(abs(x1 - x2), abs(y1 - y2));
}

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    cout << ChebyshevDistance(x1, x2, y1, y2) << endl;
    return 0;
}