class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dup = 0;
        int in = 0;
        while (dup < nums.size()) {
            // Store the number
            int unique = nums[dup];

            // Loop over the duplicate element
            while (dup < nums.size() && nums[dup] == unique) {
                dup++;
            }

            cout << "DUP: " << dup << endl;
            
            cout << "IN: " << in << endl;
            nums[in] = unique;
            in++;
        }

        return in;
    }
};