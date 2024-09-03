class Solution {
public:
    bool isLetter(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
        return false;
    }

    string reverseOnlyLetters(string s) {
        int l = 0;
        int r = s.size()-1;

        while (l < r) {
            if (isLetter(s[l]) && isLetter(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            if (!isLetter(s[l])) l++;
            if (!isLetter(s[r])) r--;
        }
        return s;
    }
};