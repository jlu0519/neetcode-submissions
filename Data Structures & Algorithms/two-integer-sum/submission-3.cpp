class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        for(int l = 0; l < (int)nums.size() ; ++l)
        {
            for(int r = l + 1; r < (int)nums.size(); ++r)
            {
                if(nums[l] + nums[r] == target) return {l,r};
            }
            
        }

        return {0,0};
    }
};
