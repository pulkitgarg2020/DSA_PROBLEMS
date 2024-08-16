class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;

        int s = 0;
        int e = n-1;
        while (s <= e) {
            int m = s + (e-s)/2;
            int rowIndex = m / col;
            int colIndex = m % col;
            int currElem = matrix[rowIndex][colIndex];

            if (currElem == target) return true;
            else if (currElem > target) e = m - 1;
            else s = m + 1;
        }
        return false;
    }
};