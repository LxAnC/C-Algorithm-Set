//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-30 23:36
//
#include <bits/stdc++.h>
using namespace std;
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi
typedef struct node{
    string name;
    int score;
}Nums;
int n, m, x, y, z, ans;
int cnt=0;
bool cmp(string s1,string s2)
{
    return s1<s2;
}
int main()
{
    cin >> n;
    int sum=0;
    Nums nums[N];
    map<string, int> hash;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        string s;
        int u;
        cin >> nums[i].name;
        cin >> nums[i].score;
        // nums[i].pos=i;
        sum+=nums[i].score;
    }
    sort(nums+1,nums+n+1,cmp);
    int l=sum%n;
    cout<<nums[l].name;

    
    return 0;
}
