class Solution {
public:
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    bool search(int row, int col, vector<vector<char>>& board, string& word,
                int index) {
        if (index == word.size())
            return true;
        if (row >= board.size() || col >= board[0].size() || row < 0 || col < 0)
            return false;
        if(board[row][col]!=word[index])return false;
        char prev = board[row][col];
        board[row][col] = '\0';
        for (int d = 0; d < 4; d++) {
            int nr = row + dr[d];
            int nc = col + dc[d];
            if (search(nr, nc, board, word, index + 1))
                return true;
        }
        board[row][col] = prev;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {

                if (search(i, j, board, word, 0))
                    return true;
            }
        }
        return false;
    }
};