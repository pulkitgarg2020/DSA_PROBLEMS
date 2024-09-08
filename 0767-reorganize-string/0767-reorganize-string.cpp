class Solution {
public:
    string reorganizeString(string s) {
        int map[26];
        for (auto i: s) map[i-'a']++;

        int max_freq = INT_MIN;
        char max_freq_char;

        for (int i=0; i<26; i++) {
            if (map[i] > max_freq) {
                max_freq = map[i];
                max_freq_char = i + 'a';
            }
        }

        // place most frequency element
        int index = 0;
        while (max_freq > 0 && index < s.size()) {
            s[index] = max_freq_char;
            max_freq--;
            index+=2;
        }

        // means we were not able to place the 
        // most frequent char
        if (max_freq != 0) return "";

        // set it to 0 so that now we can place 
        // other characters
        map[max_freq_char - 'a'] = 0;

        // place rest of the elements
        for (int i=0; i<26; i++) {
            while (map[i] > 0) {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                map[i]--;
                index += 2;
            }
        }
        return s;
    }
};