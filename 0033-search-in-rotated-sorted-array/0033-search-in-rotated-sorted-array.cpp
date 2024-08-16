class Solution {
public:
    int findPivot(vector<int> nums) {
        int s = 0;
        int n = nums.size();
        int e = n-1;
        while (s <= e) {
            int mid = s + (e - s)/2;
            if (s == e)
                return s;
            if (mid+1 < n && nums[mid] > nums[mid+1]) return mid;
            else if (mid-1 >= 0 && nums[mid-1] > nums[mid]) return mid-1;
            else if (nums[s] > nums[mid]) e = mid-1;
            else s = mid+1;  
        }
        return -1;
    }

    int binarySearch(vector<int> &nums, int s, int e, int target) {
        while (s <= e) {
            int m = s + (e-s)/2;
            if (target == nums[m]) return m;
            else if (nums[m] > target) e = m - 1;
            else s = m+1;
        }
        return -1;
    } 

    int search(vector<int>& nums, int target) {
        int p = findPivot(nums);
        int ans = -1;

        // If on the left side
        if(nums[0] <= target && target <= nums[p]) {
            ans = binarySearch(nums, 0, p, target);
        } else {
            ans = binarySearch(nums, p+1, nums.size()-1, target);
        }

        return ans;
    }
};