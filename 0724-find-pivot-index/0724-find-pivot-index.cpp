class Solution {
public:
    int bruteForceApproach(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<n; i++) {
            int lsum = 0, rsum = 0, l = 0, r = n-1;
            while (l < i)
                lsum = lsum + nums[l++];
            while (r > i)
                rsum = rsum + nums[r--];
            if (lsum == rsum)
                return i;
        }
        return -1;
    }

    int prefixSumApproach(vector<int> &nums) {
        int n = nums.size();
        vector<int> lsum(n, 0);
        vector<int> rsum(n, 0);

        // lsum
        for (int i = 1; i<n; i++)
            lsum[i] = lsum[i-1] + nums[i-1];
        
        // rsum
        for (int i = n-2; i>=0; i--)
            rsum[i] = rsum[i+1] + nums[i+1];
        
        for (int i = 0; i < n; i++) {
            if (lsum[i] == rsum[i])
                return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return prefixSumApproach(nums);
    }
};