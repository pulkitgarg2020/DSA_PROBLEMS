class Solution {
public:
    void createMapping(string &s) {
        char start = 'a';
        char map[300] = {0};

        for (char a: s) {
            if (map[a] == 0) map[a] = start;
            start++;
        }

        for (int i=0; i<s.length(); i++) {
            char ch = s[i];
            s[i] = map[ch];
        }
    } 

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        createMapping(pattern);

        for (string s: words) {
            string temp = s;

            createMapping(temp);

            if (temp == pattern) ans.push_back(s);
        }
        return ans;
    }
};