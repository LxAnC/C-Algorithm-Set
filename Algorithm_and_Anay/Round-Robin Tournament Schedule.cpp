/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int Table(int k,int a[100][100])
{
    //求解2^1个选手比赛日程，得到左上角元素
    a[1][1] = 1;
    a[1][2] = 2;
    a[2][1] = 2;
    a[2][2] = 1;
    if(k>1)
{        for(int t=1; t<k; t++)
        {
            for(int i=1+pow(2.0,t); i<=pow(2.0,t+1); i++)
            {
                for(int j=1; j<=pow(2.0,t); j++)
                {
                    a[i][j] = a[i-(int)pow(2.0,t)][j] + (int)pow(2.0,t);
                }
            }
            for(int i=1; i<=pow(2.0,t); i++)
            {
                for(int j=1+pow(2.0,t); j<=pow(2.0,t+1); j++)
                {
                    a[i][j] = a[j][i];
                }
            }
            for(int i=1+pow(2.0,t); i<=pow(2.0,t+1); i++)
            {
                for(int j=1+pow(2.0,t); j<=pow(2.0,t+1); j++)
                {
                    a[i][j] = a[i-(int)pow(2.0,t)][j-(int)pow(2.0,t)];
                }
            }

        }}
    else    ;
    return 0;
}
int main()
{
    int k;
    int a[100][100];
    cin>>k;
    double n=pow(2.0,k);
    Table(k,a);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << "　 ";
        }
        cout << endl<<endl;
    }
    return 0;
}