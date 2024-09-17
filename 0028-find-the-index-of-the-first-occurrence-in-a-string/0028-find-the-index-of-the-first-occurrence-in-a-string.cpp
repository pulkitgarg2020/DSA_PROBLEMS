class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i=0; i<haystack.length(); i++) {
            int j = 0;
            int index = i;
            int k = i;
            while (k < haystack.length() && haystack[k++] == needle[j]) {
                j++;
                if (j == needle.length()) return index;
            }
        }
        return -1;
    }
};