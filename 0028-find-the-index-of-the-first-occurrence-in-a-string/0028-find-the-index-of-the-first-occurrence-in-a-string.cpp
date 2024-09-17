class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i=0; i<haystack.length(); i++) {
            int j = 0;
            int index = i;
            // cout << "I: " << i << endl;
            // cout << "hay: " << haystack[i] << endl;
            // cout << "Needle: " << needle[j] << endl;
            // cout << "Index: " << index << endl;
            while (i < haystack.length() && haystack[i] == needle[j]) {
                cout << "I inside: " << i << endl;
                i++;
                j++;
                if (j == needle.length()) return index;
            }
        }
        return -1;
    }
};