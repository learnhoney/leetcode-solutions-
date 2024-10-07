class Solution {
public:
    bool backtrack(int i, int  j, int k, string word, vector<vector<char>>& board){
        int m = board.size();
        int n = board[0].size();

        if(k == word.length()){
            return true;
            }
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]){
            return false;
            }

        char temp = board[i][j];
        board[i][j] = '\0';

        if(backtrack(i + 1, j, k + 1, word, board) || backtrack(i - 1, j, k+ 1, word, board) || backtrack(i, j + 1, k + 1, word, board) || backtrack(i, j - 1, k + 1, word, board)){
            return true;
            }

        board[i][j] = temp;
        return false;
        };


    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for( int i = 0; i < m; i++){
            for(int j =0; j < n; j++){
                if(backtrack(i, j, 0, word, board)){
                    return true;
                }
            }
        }

        return false;
    }
};