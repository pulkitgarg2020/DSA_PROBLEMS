class Solution {
public:
    string intToRoman(int num) {
        string ans;
        map<int, string> roman_map = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        
        for (auto it = roman_map.rbegin(); it != roman_map.rend(); ++it) {
            while (num >= it->first) {
                ans.append(it->second);
                num -= it->first;
            }
        }
        return ans;
    }
};