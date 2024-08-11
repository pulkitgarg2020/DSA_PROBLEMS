class Solution {
public:
    int removeDuplicatesOptimized(vector<int>& nums) {
        int dup = 1;
        int in = 1;
        while (dup < nums.size()) {
            // Store the number
            int unique = nums[dup];

            if (nums[dup] != nums[dup - 1]) {
                // Store the elem at the index in the nums array
                nums[in++] = nums[dup];
            }
            dup++;
        }
        return in;
    }

    int removeDuplicatesWithWhileLoop(vector<int>& nums) {
        int dup = 0;
        int in = 0;
        while (dup < nums.size()) {
            // Store the number
            int unique = nums[dup];

            // Loop over the duplicate element
            while (dup < nums.size() && nums[dup] == unique)
                dup++;

            nums[in] = unique;
            in++;
        }

        return in;
    }

    int removeDuplicates(vector<int>& nums) {
        return removeDuplicatesOptimized(nums);
    }
};