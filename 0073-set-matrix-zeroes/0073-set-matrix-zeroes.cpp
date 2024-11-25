class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> rowsArr(r, 1);
        vector<int> colsArr(c, 1);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    rowsArr[i] = 0;
                    colsArr[j] = 0;
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (rowsArr[i] == 0 || colsArr[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};