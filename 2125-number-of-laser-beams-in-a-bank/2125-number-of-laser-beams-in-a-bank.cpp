class Solution {
public:
    int count_one(string s) {
        int c = 0;
        for (auto i: s) {
            if (i == '1') c++;
        }
        return c; 
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int> count(bank.size());
        for (auto s: bank) {
            int c = count_one(s);
            if (c != 0) count.push_back(c);
        }

        if (count.size() <= 1) return 0;

        int sum = 0;
        for (int n=0; n<count.size()-1; n++) {
            sum = sum + count[n]*count[n+1];
        }
        return sum;
    }
};