class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9, vector<bool>(9, false));
        vector<vector<bool>> col(9, vector<bool>(9, false));
        vector<vector<bool>> boxseen(9, vector<bool>(9, false));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                int num = board[i][j]-'1'; // to change it into char
                int boxindex = (i / 3) * 3 + (j / 3);

                if (row[i][num] || col[j][num] || boxseen[boxindex][num]) {
                    return false;
                }
                row[i][num] = true;
                col[j][num] = true;
                boxseen[boxindex][num] = true;
            }
        }
        return true;
    }
};