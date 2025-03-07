class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int strow = 0, edrow = n - 1, stcol = 0, edcol = n - 1, num = 1;

        while (strow <= edrow && stcol <= edcol) {
            for (int j = stcol; j <= edcol; j++) {
                res[strow][j] = num++;
            }
            strow++;

            for (int i = strow; i <= edrow; i++) {
                res[i][edcol] = num++;
            }
            edcol--;

            if (strow <= edrow) {
                for (int j = edcol; j >= stcol; j--) {
                    res[edrow][j] = num++;
                }
                edrow--;
            }

            if (stcol <= edcol) {
                for (int i = edrow; i >= strow; i--) {
                    res[i][stcol] = num++;
                }
                stcol++;
            }
        }

        return res;
    }
};
