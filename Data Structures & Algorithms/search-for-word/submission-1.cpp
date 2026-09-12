class Solution {
public:
    bool solve(vector<vector<char>>& board,int r,int c,int d,string s,int n){
        if (d==n){
            return true;
        }
        if(r<0 || c<0 || r==board.size() || c==board[0].size()|| board[r][c]!=s[d]){
            return false;
        }
        char t=board[r][c];
        board[r][c]=' ';

        bool ans=solve(board,r-1,c,d+1,s,n) ||
        solve(board,r+1,c,d+1,s,n) || 
        solve(board,r,c-1,d+1,s,n) || 
        solve(board,r,c+1,d+1,s,n);

        board[r][c]=t;

        return ans;

    }
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if (solve(board,i,j,0,word,word.size())) return true;
            }
        }
        return false;
    }

};
