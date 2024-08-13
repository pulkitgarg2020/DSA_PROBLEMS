class Solution {
public:

    vector<int> negativeMarking(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i=0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0)
                continue;
            nums[index] = -nums[index];
        }

        for (int j=0; j<n; j++) {
            if (nums[j] > 0)
                ans.push_back(j+1);
        }
        return ans;
    }

    vector<int> sortingAndSwapping(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i = 0;

        while(i < n) {
            int index = nums[i]-1;
            if (nums[i] != nums[index])
                swap(nums[i], nums[index]);
            else 
                i++;
        }

        for (int i=1; i<=n; i++) {
            if (nums[i-1] != i)
                ans.push_back(i);
        }

        return ans;
    }

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        return sortingAndSwapping(nums);
    }
};