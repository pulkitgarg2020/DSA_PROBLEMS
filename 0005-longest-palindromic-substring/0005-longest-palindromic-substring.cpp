class Solution {
public:
    string expand(string s, int i, int j) {
        while (i>=0 && j<s.length() && s[i] == s[j]) {
            i--;
            j++;
        }
        int l = j-i-1;
        return s.substr(i+1, l);
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int len = 0;
        string ans;
        for(int center = 0; center < n; center++) {
            string odd = expand(s, center, center);
            if (odd.length() > len) {
                len = odd.length();
                ans = odd;
            }

            string even = expand(s, center, center+1);
            if (even.length() > len) {
                len = even.length();
                ans = even;
            } 
        }
        return ans;
    }
};