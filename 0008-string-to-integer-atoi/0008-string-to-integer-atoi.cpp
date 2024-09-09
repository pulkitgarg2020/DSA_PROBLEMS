class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long num = 0;
        
        // ignore whitespaces 
        while (i < s.size() && s[i] == ' ') i++;

        // Handle sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // handle number
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            num = num*10 + (s[i]-'0');
            if (num*sign >= INT_MAX) return INT_MAX;
            if (num*sign <= INT_MIN) return INT_MIN;
            i++;
        }

        return sign*num;
    }
};