/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-29
 */
#include <bits/stdc++.h>

using namespace std;
// 今天看了视频,决定自己来做带下标排序,冲
//  int main()
//  {
//     vector<int>nums{1,4,2,6,3,5,4};
//     vector<int>ids;

//    int n=nums.size();
//    for(int i=0;i<n;i++)
//    ids.push_back(i);
//    sort(ids.begin(),ids.end(),[nums,ids](int a,int b){
//     return nums[ids[a]]<nums[ids[b]];
//    });
//    for(auto x:ids)
//    cout<<x<<endl;
//    return 0;
// }
int main()
{
   vector<int> nums{1, 2, 2, 1, 2, 3, 1};
   vector<vector<int>> queries{{1, 2}, {3, 3}, {4, 2}};
   int n = nums.size();
   vector<int> id;
   vector<long long> ret;
   for (int i = 0; i < n; i++)
      id.push_back(i);
   int j = 0;
   
   sort(id.begin(), id.end(), [nums, id](int a, int b)
        { return nums[id[a]] < nums[id[b]]; });
        sort(nums.begin(),nums.end());
   for (int i = 0; i < queries.size(); i++)
   {
      int index = queries[i][0];
      int k = queries[i][1];
      nums[id[index]] = 0;
      while (k && j < n)
      {
         if (nums[j])
         {
            nums[j] = 0;
            k--;
         };
         j++;
      }
      ret.push_back(accumulate(nums.begin(), nums.end(), 0));
   }
   for (auto x : ret)
      cout << x << endl;
   return 0;
}
class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        long long n=nums.size();
        long long sum=accumulate(nums.begin(),nums.end(),0);
        vector<long long>id;
        vector<long long>ret;
        for(long long  i=0;i<n;i++)
        id.push_back(i);
        long long j=0;
        stable_sort(id.begin(),id.end(),[nums,id](long long  a,long long b){
            return nums[id[a]]<nums[id[b]];
        });
        for(int i=0;i<queries.size();i++)
        {
            long long  index=queries[i][0];
            long long  k=queries[i][1];
            sum-=nums[index];
            nums[index]=0;
            while(k&&j<n)
            {
                if(nums[id[j]])
                {sum-=nums[id[j]];
                    nums[id[j]]=0;
                k--;};j++;
            }
           ret.push_back(sum);


        }
        return ret;
    }
};