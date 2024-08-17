class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int r = arr.size();
        int c = arr[0].size();
        vector<int> ans;

        int s_row = 0;
        int e_col = c - 1;
        int e_row = r - 1;
        int s_col = 0;
        
        int count = 0;
        bool cond = count < r*c;
        while (count < r*c) {
            // printing starting row
            for (int i=s_col; i<=e_col && count < r*c; i++) { 
                ans.push_back(arr[s_row][i]);
                count++;
            }
            s_row++;
            
            // printing ending column
            for (int i=s_row; i<=e_row && count < r*c; i++) { 
                ans.push_back(arr[i][e_col]);
                count++;
            }
            e_col--;

            // printing ending row
            for (int i=e_col; i>=s_col && count < r*c; i--) { 
                ans.push_back(arr[e_row][i]);
                count++;
            }
            e_row--;

            // printing starting column
            for (int i=e_row; i>=s_row && count < r*c; i--) {
                ans.push_back(arr[i][s_col]);
                count++;
            }
            s_col++;
        }
    
        return ans;
    }
};