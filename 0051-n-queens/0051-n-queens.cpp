class Solution {
public:
    bool isSafe(vector<string> &board , int n , int row, int col){
        //for horizontal
        for(int i = 0 ; i < n ; i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        // for verticle
        for(int i = 0 ; i < n ; i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        // left diagonal
        for(int i = row , j = col ; i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //for right diognal
        for(int i = row , j = col ; i >=0 && j < n ; i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;

    }
    void nqueen(vector<string> &board , int n , int row ,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int col = 0 ; col < n ; col++){
            if(isSafe(board,n,row,col)){
                board[row][col]='Q';
                nqueen(board,n,row+1,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nqueen(board ,n ,0 ,ans);
        return ans;
        

        
    }
};