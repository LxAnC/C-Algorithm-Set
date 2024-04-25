class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int> &nums, vector<vector<int>> &queries) {
        int n = nums.size();
        long long s = accumulate(nums.begin(), nums.end(), 0LL);
        vector<int> ids(n);
        iota(ids.begin(), ids.end(), 0);
        ranges::stable_sort(ids, [&](int i, int j) { return nums[i] < nums[j]; });

        vector<long long> ans;
        int j = 0;
        for (auto &q : queries) {
            int i = q[0], k = q[1];
            s -= nums[i];
            nums[i] = 0; // 标记
            for (; j < n && k; j++) {
                i = ids[j];
                if (nums[i] > 0) { // 没有被标记
                    s -= nums[i];
                    nums[i] = 0;
                    k--;
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
    // 视频链接在这::https://www.bilibili.com/video/BV11x421r7q5/?vd_source=a6722c3a384bc12ef108d5deb79d4cca
};