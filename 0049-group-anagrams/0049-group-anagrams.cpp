class Solution {
public:

    // bool isAnagram(string s, string t) {
    //     int i = 0;
    //     while(i < s.size()) {
    //         char c = s[i++];
    //         int p = t.find(c);
    //         if (p != string::npos) t.erase(p, 1);
    //         else return false;
    //     }
    //     return true;
    // }

    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     std::set<vector<string>> ans;
    //     for (int i = 0; i<strs.size(); i++) {
    //         set<string> group;
    //         group.insert(strs[i]);
    //         for (int j=i+1; j<strs.size(); j++) {
    //             if (isAnagram(strs[i], strs[j])) group.insert(strs[j]);
    //         }
    //         std::vector<string> groups(group.begin(), group.end());
    //         ans.insert(groups);
    //     }
    //     std::vector<vector<string>> anagrams(ans.begin(), ans.end());
    //     return anagrams;
    // }

    void print(vector<string>& strs) {
        for(auto i: strs) cout << i << endl;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // store strs in temp
        vector<string> temp(strs);

        for (int i = 0; i<strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            temp[i] = str;
        }

        std::unordered_map<string, vector<string>> map;

        // add string to map, using sorted string as key
        for (int i = 0; i<strs.size(); i++) 
            map[temp[i]].push_back(strs[i]);

        vector<vector<string>> ans;

        for (auto i: map) {
            ans.push_back(i.second);
        }

        return ans;
    }
};