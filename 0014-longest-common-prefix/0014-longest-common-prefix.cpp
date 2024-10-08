class Solution {
public:
    bool existInAll(vector<string>& strs, char c, int pos) {
        for (int s = 1; s < strs.size(); s++) {
            if (strs[s][pos] != c) return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string elem = strs[0];
        for (int c = 0; c < elem.length(); c++) {
            if (existInAll(strs, elem[c], c)) ans+=elem[c];
            else break;
        }
        return ans;
    }
};