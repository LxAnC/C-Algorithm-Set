/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-10 
 */
// class Solution {
// public:
//     int minimumOperationsToMakeKPeriodic(string word, int k) {
//             unordered_map<string,int>hash;
//             int n=word.size();
//             string d;
//             int maxa=INT_MIN;
//             int ret=0;
//             for(int i=0;i<n;i+=k)
//             {
//                 string s=word.substr(i,k);
//                 hash[s]++;
//                 if(maxa<hash[s])
//                 d=s,maxa=hash[s];
//             }
//             for(int i=0;i<n;i+=k)
//             {
//                 string b=word.substr(i,k);
//                 if(b!=d)
//                 ret++;
//             }
//             return  ret;
            
//     }
// };