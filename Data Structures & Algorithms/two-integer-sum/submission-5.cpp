class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        int n = nums.size();

        for(int i = 0; i < n; ++i)
        {
            seen[nums[i]] = i;
        }
        
        for(int j = 0; j < n; ++j)
        {
            int need = target - nums[j];
            auto it = seen.find(need);
            if(it != seen.end() && it->second != j) return {j, it->second};
        }

        return {};
    }
};
