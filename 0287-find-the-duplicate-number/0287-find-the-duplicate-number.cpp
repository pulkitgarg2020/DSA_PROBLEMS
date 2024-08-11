class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        cout << "NUMS I: " << nums[0] << " NUMS I-1: " << nums[1]; 
        for (int i=1; i<=nums.size()-1; i++) {
            if (nums[i] == nums[i-1])
                return nums[i];
        }
        return 0;
    }
};