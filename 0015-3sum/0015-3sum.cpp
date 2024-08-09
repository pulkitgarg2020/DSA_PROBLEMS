#include<algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> tripletsSet; // Using a set to store unique triplets
        vector<vector<int>> res;

        // Sort Array
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        // Fix one pointer and move others
        for (int i=0; i<n-2; i++) {
            // j + k = -i
            int find = -(nums[i]);
            int left = i+1;
            int right = n-1;
            int sum = 0;
            while(left<right) {
                sum = nums[left] + nums[right];
                if (sum == find) {
                    tripletsSet.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum < find)
                    left++;
                else 
                    right--;
            }
        }

        res.assign(tripletsSet.begin(), tripletsSet.end());
        return res;
    }
};