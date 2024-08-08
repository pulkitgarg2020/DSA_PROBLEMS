class Solution {
public:
    void sortColors(vector<int>& nums) {
        // OPTIMIZED SOLUTION
        // left pointer
        int left = 0;

        // right pointer
        int right = nums.size() - 1;

        // index to traverse the array
        int index = 0;

        // Because right would just have 2's
        // - So no need to iterate over that
        while(index <= right) {
            // If 0 found, move to the left 
            // and increment index and left
            if (nums[index] == 0)
                swap(nums[index++], nums[left++]);
            // If 2 found, move to the right
            // decrement only the right because
            // we need to check what came on 
            // the current index, it could be
            // 0 or 1
            else if(nums[index] == 2)
                swap(nums[index], nums[right--]);
            // If 1 found, just skip it and move
            // the index
            else 
                index++;
        }

        // int count_0 = 0;
        // int count_1 = 0;
        // int count_2 = 0;
        // int n = nums.size();

        // for (int i=0; i<n; i++) {
        //     if (nums[i] == 0)
        //         count_0++;
        //     else if (nums[i] == 1)
        //         count_1++;
        //     else
        //         count_2++;
        // } 

        // int m = 0;
        // while(count_0--)
        //     nums[m++] = 0;
        // while(count_1--)
        //     nums[m++] = 1;
        // while(count_2--)
        //     nums[m++] = 2;
    }
};