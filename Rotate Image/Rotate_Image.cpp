class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // swap i,j and j,i
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse each row
        for (int k = 0; k < n; k++) { // traversing each row
            int i = 0;
            int j = n - 1;
            while (i <= j) { // swapping k,i and k,j
                swap(matrix[k][i], matrix[k][j]);
                i++;
                j--;
            }
        }
    }
};