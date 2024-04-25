/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-25 
 */
//题目有点冗长难以反应,现在来试一下;
//首先肯定需要定义另一个数组来存储是否被标记;
//然后依次进行他们的操作;
class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        ranges:: sort(nums);
        unordered_map<int,bool>mp;
        vector<int>ans(queries.size());
        for(auto x:nums)
            mp[x]=false;
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                if(j==0)
                if(mp[queries[i][j]]==false)
                mp[queries[i][j]]=true;
                if(j==1)
                {
                    for(int k=0;k<n;k++)
                    {
                        if(mp[nums[k]]==false)
                        {
                            mp[nums[k]]==true;
                            queries[i][j]--;
                        }
                    }
                }
            }
        }
        cout<<mp[1]<<endl;
    }
};