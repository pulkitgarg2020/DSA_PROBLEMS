class Solution {
public:
    string convert(string s, int n) {
        if (n == 1) return s;

        vector<string> rows(n);
        int dir = 0;
        int i = 0;
        while (i < s.length()) {
            while(i < s.length() && dir <= n-1) {
                char c = s[i];
                rows[dir++] += c; 
                i++;
            }
            dir = dir-2;
            while(i < s.length() && dir > 0) {
                char c = s[i];
                rows[dir--] += c;
                i++;
            }
            dir = 0;
        }
        string ans;
        for (auto str: rows) ans.append(str);

        return ans;
    }
};