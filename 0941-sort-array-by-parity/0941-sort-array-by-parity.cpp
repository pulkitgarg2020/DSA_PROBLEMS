class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1, index = 0;
        while(index < r) {
            if (nums[index] % 2 == 0)
                swap(nums[index++], nums[l++]);
            else 
                swap(nums[index], nums[r--]);
        }
        return nums;
    }
};