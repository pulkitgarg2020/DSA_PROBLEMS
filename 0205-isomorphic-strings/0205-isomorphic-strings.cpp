class Solution {
public:
    string createMapping(string a) {
        char start = 'a';
        char map[280] = {0};
        string ans;

        for (char i: a) {
            if (map[i] == 0)
                map[i] = start++;
        }

        for (char i: a) ans+=map[i];

        return ans;
    }

    bool isIsomorphic(string s, string t) {
       return createMapping(s) == createMapping(t);
    }
};