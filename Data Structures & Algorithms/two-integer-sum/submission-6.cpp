class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        int n = nums.size();

        // Fill out unordered map with vector num as key and index as second
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
