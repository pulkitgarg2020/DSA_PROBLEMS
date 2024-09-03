class Solution {
public:
    int usingTwoPointers(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = 1;
        set<pair<int, int>> ans;
        while (r < nums.size()) {
            int diff = nums[r]-nums[l]; 
            if (diff > k) l++;
            else if (diff < k) r++;
            else {
                ans.insert({nums[l], nums[r]});
                l++;
                r++;
            }
            if (l==r) r++;
        }
        return ans.size();  
    }

    bool binarySearch(vector<int>& nums, int s, int e, int t) {
        while(s<=e) {
            int m = s+(e-s)/2;
            if (nums[m] == t) return true;
            else if (nums[m] > t) e=m-1;
            else s=m+1;
        }
        return false;
    }

    int usingBinarySearch(vector<int>& nums, int k) {
        set<pair<int, int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=0; i<n; i++) {
            bool found = binarySearch(nums, i+1, n-1, nums[i]+k);
            if (found) ans.insert({nums[i], nums[i]+k});
        }
        return ans.size();
    }

    int findPairs(vector<int>& nums, int k) {
        return usingBinarySearch(nums, k);
    }
};