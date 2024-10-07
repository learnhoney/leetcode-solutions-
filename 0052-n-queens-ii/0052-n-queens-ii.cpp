class Solution {
public:
    
    bool placer(int x, int col, vector<string>& s){
        int row = x, column = col;
        while (x >= 0 && col >= 0){
            if (s[x][col] == 'Q') return false;
            x--;
            col--;
        }
        x = row;
        col = column;
        while (x < s.size() && col >= 0){
            if (s[x][col] == 'Q') return false;
            x++;
            col--;
        }
        x = row;
        col = column;
        while (col >= 0){
            if (s[x][col] == 'Q') return false;
            col--;
        }
        return true;
    }
    
    void solver(int col, vector<string>& s, int n, int& count){
        if (col == n){
            count++;
            return;
        }
        for (int i = 0; i < n; i++){
            if (placer(i, col, s)){
                s[i][col] = 'Q';
                solver(col + 1, s, n, count);
                s[i][col] = '.';
            }
        }
    }
    
    int totalNQueens(int n){
        int count = 0;
        vector<string> s(n, string(n, '.'));
        solver(0, s, n, count);
        return count;
    }
};
