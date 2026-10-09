class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ums;
        unordered_map<char,int> umt;

        for(int i = 0; i < s.size(); ++i)
        {
            ums[s[i]]++;
        }

        for(int j = 0; j < t.size(); ++j)
        {
            umt[t[j]]++;
        }

        return umt == ums;
    }
};
