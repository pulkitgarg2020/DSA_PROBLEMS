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

    int usingCounterArray(vector<int>& nums) {
        vector<int> counter(nums.size(), 0);

        for (int i=0; i<nums.size(); i++) {
            counter[nums[i]]++;
        }
        
        for (int i=0; i<counter.size(); i++) {
            if (counter[i] > 1) 
                return i;
        }

        return -1;
    }

    int negativeMarkingMethod(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            int index = abs(nums[i]);
            if (nums[index] < 0)
                return index;
            else {
                nums[index] = -nums[index];
            }
        }
        return -1;
    }

    int findDuplicate(vector<int>& nums) {
        return negativeMarkingMethod(nums);
    }
};