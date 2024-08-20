class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s <= e) {
            int m = s+ (e-s)/2;
            if(nums[m] == target) return m;
            else if (nums[m] > target) e = m-1;
            else s = m+1; 
        }
        return -1;
    }

    // int findElem(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     int s = 0;
    //     int e = n - 1;
    //     while (s <= e) {
    //         int m = s + (e-s)/2;
    //         if (nums[m]+1 == target) return m+1;
    //         else if (nums[m]-1 == target) return m;
    //         else if (nums[m] > target) e = m-1;
    //         else s = m+1; 
    //     }
    //     return -1;
    // }

    int findElem(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int ans = -1;
        while (s <= e) {
            int m = s + (e-s)/2;
            if (target > nums[m]) {
                ans = m+1; 
                s = m+1;
            } else {
                ans = m;
                e = m-1;
            }
        }
        return ans;
    }

    int searchInsert(vector<int>& nums, int target) {
        int find = binarySearch(nums, target);
        if (find == -1)
            return findElem(nums, target);
        return find;
    }
};