class Solution {
public:
    int findSumUsingVectors(vector<int>& nums) {
        vector<int> lsum(nums.size(), 0);
        vector<int> rsum(nums.size(), 0);

        int n = nums.size();
        int r = nums.size()-2;
        for (int i=1; i<n; i++)
            lsum[i] = lsum[i-1] + nums[i-1];
        for (int i=n-2; i>=0; i--)
            rsum[i] = rsum[i+1] + nums[i+1];
        
        for (int i=0; i<nums.size(); i++) {
            if (lsum[i] == rsum[i])
                return i;
        }

        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return findSumUsingVectors(nums);
    }
};