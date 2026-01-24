class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n)); // Declare the 2D matrix
        int minr = 0, minc = 0;
        int maxr = n - 1, maxc = n - 1;
        int c = 1;

        while (minr <= maxr && minc <= maxc) {
            // right
            for (int j = minc; j <= maxc; j++) {
                v[minr][j] = c++;
            }
            minr++;

            // down
            for (int i = minr; i <= maxr; i++) {
                v[i][maxc] = c++;
            }
            maxc--;

            // left
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    v[maxr][j] = c++;
                }
                maxr--;
            }

            // up
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    v[i][minc] = c++;
                }
                minc++;
            }
        }

        return v;
    }
};