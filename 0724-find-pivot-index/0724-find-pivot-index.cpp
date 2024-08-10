class Solution {
public:
    int pivotIndex(vector<int>& nums) {
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
};