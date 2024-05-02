/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-25 
 */
//待会添加链接
// https://leetcode.cn/contest/biweekly-contest-126/
//思路就是先找出最大值,然后将改为对应位的数字
// class Solution {
// public:
//     int sumOfEncryptedInt(vector<int>& nums) {
//         int sum;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             int elem=nums[i];
//             int max=nums[i]%10;
//             int k=0;
//             while(elem)
//             {
//                 if(elem%10>max)
//                 max=elem%10;
//                 k++;
//                 elem/=10;
//             }
//             if(k==1)
//             nums[i]=max;
//             else if(k==2)
//             nums[i]=max*10+max;
//             else if(k==3)
//             nums[i]=max*100+max*10+max;
//             else if(k==4)
//             nums[i]=max*1000+max*100+max*10+max;
//         }
//         return accumulate(nums.begin(),nums.end(),0);
//     }
// };