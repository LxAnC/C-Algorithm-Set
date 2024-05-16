#include<bits/stdc++.h>
int main()
{
    struct _timeb T;
    _ftime(&T);
    srand(T.millitm); //获得毫秒
    int a = rand();
    printf("%d\n", a);
}
