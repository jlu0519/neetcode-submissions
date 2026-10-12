class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> res;
        for(const auto& s : strs)
        {
            string key(26,0);
            for(char c : s) key[c - 'a']++;
            res[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& [key, group]: res)
        {
            result.push_back(std::move(group));
        }

        return result;
    }
};
