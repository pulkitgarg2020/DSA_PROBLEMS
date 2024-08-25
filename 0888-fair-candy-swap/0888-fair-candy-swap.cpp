class Solution {
public:
    int calcSum(vector<int> a) {
        int sum = 0;
        for (auto i : a)
            sum+=i;
        return sum;
    }
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a = calcSum(aliceSizes);
        int sum_b = calcSum(bobSizes);
        int diff = (sum_a - sum_b) / 2;

        vector<int> ans;

        // put bob's in a set
        std::unordered_set<int> s(bobSizes.begin(), bobSizes.end());

        for (int i : aliceSizes) {
            // Correct the difference to i - diff for checking the condition
            if (s.find(i - diff) != s.end()) {
                ans.push_back(i);
                ans.push_back(i - diff);
                return ans;
            }
        }

        return ans;
    }
};