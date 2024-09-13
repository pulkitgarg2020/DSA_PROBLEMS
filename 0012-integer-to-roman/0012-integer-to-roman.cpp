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
        
        auto it = roman_map.rbegin();
        while (it != roman_map.rend()) {
            if (num >= it->first) {
                ans.append(it->second);
                cout << "FIRST: " << it->first << endl;
                num = num - it->first;
                cout << "NUM: " << num << endl;
                auto it = roman_map.rbegin();
            } else it++;
        }
        return ans;
    }
};