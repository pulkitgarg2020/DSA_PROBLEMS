class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[280] = {0};

        // Create Mapping
        for (char k: key) {
            if (k != ' ' && mapping[k] == 0) { 
                mapping[k] = start;
                start++;
            }
        }

        string ans;

        // Use mapping
        for (auto i: message) {
            if (i == ' ') ans.push_back(' '); 
            else ans.push_back(mapping[i]);
        }
        
        return ans;
    }
};