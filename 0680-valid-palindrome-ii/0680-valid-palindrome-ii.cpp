class Solution {
public:

    bool checkPalindrome(string s, int l, int r) {
        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;

        while (l < r) {
            if (s[r] == s[l]) {
                l++;
                r--;
            } else {
                // l remove kardo
                bool ans_1 = checkPalindrome(s, l+1, r);

                // r remove kardo
                bool ans_2 = checkPalindrome(s, l, r-1);

                return ans_1 || ans_2;
            }
        }
        return true;
    }
};