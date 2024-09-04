class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;

        while (l < r) {
            if (isVowel(s[l]) && isVowel(s[r])) swap(s[l++], s[r--]);
            if (!isVowel(s[l])) l++;
            if (!isVowel(s[r])) r--;
        }
        return s;
    }
};