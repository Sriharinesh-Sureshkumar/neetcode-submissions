class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> sqrs(9);
        for (int row = 0 ; row < 9 ; row++){
            for (int col = 0 ; col < 9 ; col++){
                if (board[row][col] == '.'){
                    continue;
                }
                int sqr = (row / 3) * 3 + (col / 3);
                if (rows[row].count(board[row][col])){
                    return false;
                }
                if (cols[col].count(board[row][col])){
                    return false;
                }
                if (sqrs[sqr].count(board[row][col])){
                    return false;
                }
                rows[row].insert(board[row][col]);
                cols[col].insert(board[row][col]);
                sqrs[sqr].insert(board[row][col]);
            }
        }
        return true;
    }
};
