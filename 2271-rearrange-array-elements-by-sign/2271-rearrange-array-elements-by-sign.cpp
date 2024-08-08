class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int m = 0;
        int k = 1;
        for(int i=0; i<n; i++) {
            if (nums[i] > 0) {
                ans[m] = nums[i];
                m+=2;
            } else {
                ans[k] = nums[i];
                k+=2;
            }
        }

        return ans;
    }
};