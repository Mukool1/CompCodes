class Solution {
public:
    bool isSafe(vector<string>board,int row,int col,int n){
        //for horizontal condition
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q')return false;
        }
        //for vertical condition
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q')return false;
        }
        //for left diagonal checking
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q')return false;
        }
        //for right diagonal
        for(int i=row,j=col;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q')return false;
        }
        return true;
    }
    void nQueen(vector<string>&board,int row,int n,vector<vector<string>>&ans){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i]='Q';
                nQueen(board,row+1,n,ans);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        nQueen(board,0,n,ans);
        return ans;
    }
};