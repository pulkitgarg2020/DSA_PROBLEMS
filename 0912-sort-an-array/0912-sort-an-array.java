class Solution {
    public int[] sortArray(int[] nums) {
        
        // Insertion Sort
        
        // i = 1 -> because we assume that the first element is sorted
        for(int i = 1; i < nums.length; i++) {
            
            // stored the current element
            int key = nums[i];
            int j = i - 1;
            
            while(j >= 0 && nums[j] > key) {
                nums[j+1] = nums[j];
                j = j - 1;
            }
            nums[j+1] = key;
        }
        return nums;
    }
}