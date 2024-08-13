class Solution {
public:

    int findRange(vector<int>& nums, int target, bool range) {    
        int first = -1;   
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int m = (s+e)/2;
            if (nums[m] == target) {
                first = m;
                if (range)
                    e = m-1;
                else 
                    s = m+1;
            } else if (target > nums[m])
                s = m+1;
            else 
                e = m-1;
        }

        return first;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findRange(nums, target, true);
        int last = findRange(nums, target, false);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};