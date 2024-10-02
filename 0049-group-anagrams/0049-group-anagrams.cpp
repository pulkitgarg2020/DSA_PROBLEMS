class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> map;
        for (int i = 0; i<strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            map[str].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto i: map) ans.push_back(i.second);

        return ans;
    }
};