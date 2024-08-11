class Solution {
public:
    int usingSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=1; i<=nums.size()-1; i++) {
            if (nums[i] == nums[i-1])
                return nums[i];
        }
        return 0;
    }

    int findDuplicate(vector<int>& nums) {
        return usingSort(nums);
    }
};