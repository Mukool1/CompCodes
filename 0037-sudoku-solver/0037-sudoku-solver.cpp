class Solution {
public:

    bool isSafe(vector<vector<char>>& board,int row,int col,char digit){
        for(int i=0;i<9;i++){
            if(board[row][i]==digit)return false;
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==digit)return false;
        }
        int cr=(row/3)*3,cc=(col/3)*3;
        for(int i=cr;i<=cr+2;i++){
            for(int j=cc;j<=cc+2;j++){
                if(board[i][j]==digit)return false;
            }
        }
        return true;
    }

    bool soln(vector<vector<char>>& board,int row,int col){
        if(row==9){
            return true;
        }
        int nxrow=row,nxcol=col+1;
        if(nxcol==9){
            nxrow=row+1;
            nxcol=0;
        }
        if(board[row][col]!='.'){
            return soln(board,nxrow,nxcol);
        }
        for(int i=1;i<=9;i++){
            char digit = '0' + i;
            if(isSafe(board,row,col,digit)){
                board[row][col]=digit;
                if(soln(board,nxrow,nxcol))return true;
                board[row][col]='.';
            }
        }
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        soln(board,0,0);
    }
};