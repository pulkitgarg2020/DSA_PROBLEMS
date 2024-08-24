class Solution {
public:
    char lowerCase(char c) {
        if (c>= 'A' && c<= 'Z')
            return c - 'A' + 'a';
        return c;
    }

    bool isAlphabet(char c) {
        if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9')) return false;
        return true;
    }

    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        bool flag = false;

        while (l<=r) {
            while (l<r && !isAlphabet(s[l])) l++;
            while (l<r && !isAlphabet(s[r])) r--;

            if (lowerCase(s[l]) != lowerCase(s[r])) return false;
            l++;
            r--; 
        }

        return true;
    }
};