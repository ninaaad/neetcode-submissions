class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9], col[9], box[9];

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){

                if (board[i][j] == '.') continue;

                if (row[i].contains(board[i][j]) || col[j].contains(board[i][j]) || box[(i/3)*3 + (j/3)].contains(board[i][j])) return false;

                else {
                    row[i].insert(board[i][j]);
                    col[j].insert(board[i][j]);
                    box[(i/3)*3 + (j/3)].insert(board[i][j]);
                }
            }
        }

        return true;
    }
};
