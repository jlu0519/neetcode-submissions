class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString;

        for(const auto&  str : strs)
        {
            int n = str.size();
            for(char c : str)
            {
                encodedString += static_cast<char>(c+1);
            }
            
            encodedString += ' ';
        }
        
        return encodedString;

    }

    vector<string> decode(string s) {
        vector<string> decodedResult;
        string decoded;

        for(char c : s)
        {
            if( c != ' ')
            {
                decoded += static_cast<char>(c - 1);
            }
            else
            {
                decodedResult.push_back(decoded);
                decoded.clear();
            }
        }

        return decodedResult;
    }
};
