class Solution {
public:
    vector<int> twoSumBruteForce(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i]+nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }

    vector<int> twoSumTwoPointers(vector<int>& nums, int target) {
        // Create a copy 
        vector<int> nums_sorted(nums);

        // sort the array
        sort(nums_sorted.begin(), nums_sorted.end());
        
        vector<int> ans;

        int l = 0;
        int r = nums_sorted.size() - 1;
        while (l < r) {
            int sum = nums_sorted[l] + nums_sorted[r];
            if (sum > target) {
                r--;
            }
            else if (sum < target)
                l++;
            else {
                break;
            }
        }

        for (int i=0; i < nums.size(); i++) {
            if (nums[i] == nums_sorted[l] || nums[i] == nums_sorted[r])
                ans.push_back(i);
        }
        return ans;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        return twoSumTwoPointers(nums, target);
    }
};