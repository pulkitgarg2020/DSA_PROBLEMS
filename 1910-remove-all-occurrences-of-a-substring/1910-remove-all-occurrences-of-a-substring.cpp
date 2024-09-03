class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l = part.length();
        while (s.find(part) != -1) {
            s.erase(s.find(part), l);
        }
        return s;
    }
};