class Solution {
public:
    static bool mycomp(string a, string b) {
        string t1 = a + b;
        string t2 = b + a;
        return t2 < t1;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snums;

        for (auto n: nums) snums.push_back(to_string(n));

        sort(snums.begin(), snums.end(), mycomp);

        if (snums[0] == "0") return "0";

        string ans="";
        for (auto c: snums) ans+=c;

        return ans;
    }
};