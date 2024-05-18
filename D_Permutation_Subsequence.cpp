#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
const int maxn=2e5+5;
int nums[maxn];
int p[maxn];
int n,k;
priority_queue<int>q;//只用存储他们的下标就可以了
int ret=INT_MAX;
int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int left,right;
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
    cin>>nums[i];
    p[nums[i]]=i;
  }
  for(int i=1;i+k-1<=n;i++)
  {
    q.push(pos[i])
    int maxpos=q.front
  }
  cout<<ret;
}