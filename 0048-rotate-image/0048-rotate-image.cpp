class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose
        int n = matrix.size();

        // take transpose
        for (int i=0; i<n; i++) {
            for (int j=i; j<matrix[i].size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse rows in array
        for (int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};