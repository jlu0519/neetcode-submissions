class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded {};
        
        int count{ };
        for(const auto& str : strs)
        {
            count = str.size();
            encoded += to_string(count);
            encoded += '#';
            encoded += str;
        }

        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> decoded {};
        size_t pos {0};

        while(pos < s.size())
        {
            size_t hash = s.find('#', pos);
            int len = stoi(s.substr(pos, hash - pos));
            decoded.push_back(s.substr(hash + 1, len));
            pos = hash + 1 + len;
        }

        return decoded;
    }
};
