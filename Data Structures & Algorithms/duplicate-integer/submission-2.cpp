class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto x : nums)
        {
            if(!seen.insert(x).second) return true;
        }
        return false;
    }
};