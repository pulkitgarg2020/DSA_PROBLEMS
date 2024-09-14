class Solution {
public:
    string convert(string s, int n) {
        if (n == 1) return s;

        vector<string> rows(n);
        int dir = 0;
        int i = 0;
        while (i < s.length()) {
            cout << "DIR in start: " << dir << endl;
            while(i < s.length() && dir <= n-1) {
                char c = s[i];
                cout << "dir down: " << dir << " c: " << c << endl;
                rows[dir++] += c; 
                i++;
            }
            cout << "DIR: " << dir << endl;
            dir = dir-2;
            while(i < s.length() && dir > 0) {
                char c = s[i];
                cout << "dir up: " << dir << " c: " << c << endl;
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