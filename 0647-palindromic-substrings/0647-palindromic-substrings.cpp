class Solution {
public:
    int expand(string s, int i, int j) {
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int n = s.length();
        int total = 0;
        for (int center = 0; center < n; center++) {
            int oddAns = expand(s, center, center);
            int evenAns = expand(s, center, center+1);
            total = total + oddAns + evenAns;
        }        
        return total;
    }
};