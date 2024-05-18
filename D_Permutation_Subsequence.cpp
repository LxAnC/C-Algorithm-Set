#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
const int maxn=2e5+5;
int nums[maxn];
int p[maxn];
int n,k;

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
    ret=min(ret,p[nums[i]]-p[nums[i+k-1]]);
  }
  while(1)
}