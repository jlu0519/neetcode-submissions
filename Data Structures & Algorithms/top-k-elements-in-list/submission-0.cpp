class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        for(auto& num : nums)
        {
            freq[num]++;
        }
        vector<int> result;
        for (int j = 0; j < k; ++j)
        {
            int best_key = 0, best_count = 0;
            for (auto& [key, count] : freq)
            {
                if (count > best_count)
                {
                    best_count = count;
                    best_key = key;
                }
            }
            result.push_back(best_key);
            freq.erase(best_key);
        }
        return result;
    }
};
