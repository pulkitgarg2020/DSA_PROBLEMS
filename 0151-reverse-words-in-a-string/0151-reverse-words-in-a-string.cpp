class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(), s.end()); 
	int i = 0;
    int n = s.length();
    int l = 0, r = 0;
    while (i < n) {
        while (i < s.length() && s[i] == ' ') i++;
        if (i == n) break;
        while (i < s.length() && s[i] != ' ') s[r++] = s[i++];
        reverse(s.begin()+l, s.begin()+r);
        s[r++] = ' ';
        l = r;
        i++;
    }
    s.resize(r-1);    
    return s;
    }
};