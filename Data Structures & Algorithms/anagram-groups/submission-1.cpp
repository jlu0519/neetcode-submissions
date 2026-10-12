class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> res;
        for(const auto& s : strs)
        {
            vector<int> freq(26,0);
            for(char c : s) {
                freq[c - 'a']++;
            }
            string key = to_string(freq[0]);
            for(int i = 1; i < 26; ++i)
            {
                key += ',' + to_string(freq[i]);
            }
            // If key exists we push the word s onto the associated vector
            // else we create a new vector with the new key
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& [key, group]: res)
        {
            result.push_back(std::move(group));
        }

        return result;
    }
};
