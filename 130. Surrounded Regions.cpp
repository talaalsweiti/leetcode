class Solution {
public:
 
    void solve(vector<vector<char>>& board) {
        int m =board.size();
        int n = board[0].size();
        /*borders : 
        00 01 02 03 . . n-1
        10           n-1
        20           n-1
        .           .   
        .           .   
        m 1 2 ... . n-1 
         */
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        queue<pair<int,int>> q;
        map<pair<int,int>,bool> visit;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]=='O'){
                    q.push({i,j});
                    while(!q.empty()) {
                        pair<int,int> front = q.front();
                         // cout << front.first << " " << front.second <<endl;
                        board[front.first][front.second] = 'a';
                        q.pop();
                        for(int k=0;k<4;k++) {
                            // cout << k << endl;
                            if(front.first+dx[k]<0 || front.first+dx[k]>=m ) continue;
                            if(front.second+dy[k]<0 || front.second+dy[k]>=n ) continue;
                            if(board[front.first+dx[k]][front.second+dy[k]]!='O') continue;
                            q.push({front.first+dx[k],front.second+dy[k]});
                            board[front.first+dx[k]][front.second+dy[k]]='a';
                            
                        }
                    }

                }
                if((i==0 || i==m-1)){
                   continue;
                } else{
                    if(j!=n-1){
                        j=n-1;
                        j--;
                    }
                }
            }
  
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(board[i][j]=='O') board[i][j] ='X';
                if(board[i][j]=='a') board[i][j] ='O';
                
            }
            // cout << endl;
        }
    }
};
