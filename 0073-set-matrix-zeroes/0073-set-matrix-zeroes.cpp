class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> col, row;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for (int i = 0; i < row.size(); i++) {
            int r = row[i];
            for (int k = 0; k < matrix[0].size(); k++) {
                matrix[r][k] = 0;
            }
        }
        for (int i = 0; i < col.size(); i++) {
            int c = col[i];
            for (int k = 0; k < matrix.size(); k++) {
                matrix[k][c] = 0;
            }
        }
    }
};