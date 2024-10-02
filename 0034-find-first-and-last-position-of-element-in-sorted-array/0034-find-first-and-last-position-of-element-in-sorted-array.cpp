class Solution {
public:

    // find last element
    int findFirst(vector<int>& nums, int t) {
        int first = -1;
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int m = s + (e-s)/2;

            if (nums[m] > t) e = m - 1;
            else if (nums[m] < t) s = m+1;
            else {
                first = m;
                e = m-1;
            }
        }
        return first;
    }

    int findLast(vector<int>& nums, int t) {
        int last = -1;
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int m = s + (e-s)/2;

            if (nums[m] > t) e = m - 1;
            else if (nums[m] < t) s = m+1;
            else {
                last = m;
                s = m+1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        // cout << first << endl;
        // cout << last << endl;
        if (first <= last) return {first, last};
        else return {-1, -1};
    }
};