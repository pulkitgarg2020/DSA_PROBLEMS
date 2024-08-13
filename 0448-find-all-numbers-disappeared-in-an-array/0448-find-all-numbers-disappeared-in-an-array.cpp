class Solution {
public:
    void printVector(vector<int>& nums) {
        for (int i: nums)
            cout << i << " ";
        cout << endl;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i=0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0)
                continue;
            nums[index] = -nums[index];
        }

        printVector(nums);

        for (int j=0; j<n; j++) {
            if (nums[j] > 0)
                ans.push_back(j+1);
        }
        return ans;
    }
};