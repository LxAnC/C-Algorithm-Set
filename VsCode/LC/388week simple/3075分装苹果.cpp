/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-22 
 */
// class Solution {
// public:
//     int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
//         ranges::sort(capacity);  //C++20标准的ranges库,如同视图的结构
//         int ret=0;
//         int sum=accumulate(apple.begin(),apple.end(),0);
//         int n=capacity.size();
//         for(int i=n-1;i>=0;i--)
//         {
//             sum-=capacity[i];
//             ret++;
//             if(sum<=0)
//             break; 
            
//         }
//         return ret;

//     }
// };