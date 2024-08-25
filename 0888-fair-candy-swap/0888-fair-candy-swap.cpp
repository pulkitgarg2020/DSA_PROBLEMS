class Solution {
public:
    int calcSum(vector<int> a) {
        int sum = 0;
        for (auto i : a)
            sum+=i;
        return sum;
    }

    bool binarySearch(vector<int> c, int t) {
        int s = 0;
        int e = c.size()-1;

        while (s<=e) {
            int m = s + (e-s)/2;
            if (c[m] == t) return true;
            else if (c[m] < t) s = m+1;
            else e = m-1; 
        }

        return false;
    }

    vector<int> usingBinarySearch(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a = calcSum(aliceSizes);
        int sum_b = calcSum(bobSizes);
        int diff = (sum_a - sum_b) / 2;

        sort(bobSizes.begin(), bobSizes.end());

        for (int i : aliceSizes) {
            if(binarySearch(bobSizes, i-diff))
                return {i, i-diff};
        }

        return {};
    }

    vector<int> usingSet(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a = calcSum(aliceSizes);
        int sum_b = calcSum(bobSizes);
        int diff = (sum_a - sum_b) / 2;

        // put bob's in a set
        std::unordered_set<int> s(bobSizes.begin(), bobSizes.end());

        for (int i : aliceSizes) {
            if (s.find(i - diff) != s.end())
                return {i, i-diff};
        }

        return {};  
    }

    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        return usingSet(aliceSizes, bobSizes);
    }
};