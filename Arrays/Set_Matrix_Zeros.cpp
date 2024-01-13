class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> jcol;

        for (int i = 0; i < matrix.size(); i++) {
            int it = -1; // Initialize it to an invalid value
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    it = i;
                    jcol.push_back(j);
                }
            }

            if (it != -1) {
                fill(matrix[it].begin(), matrix[it].end(), 0);
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < jcol.size(); j++) {
                matrix[i][jcol[j]] = 0; // Set the column to zero
            }
        }
    }
};
