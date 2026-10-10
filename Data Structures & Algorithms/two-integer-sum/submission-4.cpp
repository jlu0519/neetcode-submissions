class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> um;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            um[nums[i]] = i;
        }

        for (int j = 0; j < n; ++j)
        {
            int need = target - nums[j];
            auto it = um.find(need);
            if (it != um.end() && it->second != j) return {j, it->second};
        }

        return {};
    }
};
