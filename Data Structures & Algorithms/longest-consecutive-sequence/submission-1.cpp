struct Solution {
    int longestConsecutive(const vector<int>& nums) {
        unordered_map<int, int> um;
        int res {};
        for (int num : nums)
        {
            if(!um[num])
            {
                um[num] = um[num - 1] + um[num + 1] + 1;
                um[num - um[num - 1]] = um[num];
                um[num + um[num + 1]] = um[num];
                res = max(res, um[num]);
            }
        }
        return res;
    }
};
