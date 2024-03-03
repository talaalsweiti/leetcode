class Solution {
public:
    int dx[8] = {1,0,0,-1,1,-1,1,-1};
    int dy[8] = {0,1,-1,0,1,-1,-1,1};
    bool check(int x,int y,int n ,int m){
        if(x>=n || y>=m || x<0 || y<0) return false;
        return true;
    }
    void gameOfLife(vector<vector<int>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                int live =0;
                for(int k=0;k<8;k++){
                    if(check(i+dx[k],j+dy[k],board.size(),board[i].size())){
                        if(board[i+dx[k]][j+dy[k]]==1 || board[i+dx[k]][j+dy[k]]==-1) live++;
                    }
                }
                if(board[i][j]==-1 || board[i][j]==1){
                    if(live<2 || live>3) board[i][j] =-1;
                }else{
                    if(live==3)board[i][j]=-2;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==-1) board[i][j]=0;
                else if(board[i][j]==-2) board[i][j]=1;
            }
        }
    }
};

/*

00  01   02
    11

[[0,-1,0],
[0,0,1],
[1,1,1],  ->   
[0,0,0]]

[[0,0,0],
[1,0,1],
[0,1,1],
[0,1,0]]
*/