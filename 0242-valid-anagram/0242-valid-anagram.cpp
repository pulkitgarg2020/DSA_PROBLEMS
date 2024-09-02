class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        for (auto c: s) {
            int i = t.find(c);
            if (i == string::npos) return false;
            else t.erase(i, 1);
        }
        return true;
    }
};