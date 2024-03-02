class Solution {
public:
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int ans =0;
    bool check(int x,int y , vector<vector<int>>& grid2 ){
        if(x >= grid2.size() || x <0 || y <0 || y >= grid2[x].size()) return false;
        return grid2[x][y];
    }
    void checkGrid1( vector<pair<int,int>>seen,vector<vector<int>>& grid1){
      
        for(pair<int,int> x :seen){
            if(!grid1[x.first][x.second]) return;
           
        }
        ans++;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
     
        queue<pair<int,int>> q;
        vector<pair<int,int>> seen;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[i].size();j++){
                if(grid2[i][j]){
                    q.push({i,j});
                    int current = 1 ,next =0;
                    while(!q.empty()){
                        pair<int,int> front = q.front();
                        grid2[front.first][front.second]=0;
                        q.pop();
                        seen.push_back({front});
                        current--;
                        for(int k=0;k<4;k++){
                            if(check(dx[k]+front.first,dy[k]+front.second,grid2)){
                                q.push({dx[k]+front.first,dy[k]+front.second});
                                grid2[dx[k]+front.first][dy[k]+front.second]=0;
                               
                                current++;
                            }
                        }
                        if(!current){
                            checkGrid1(seen,grid1);
                            swap(next,current);
                            seen = {};
                        }
                    }
                }
            }
        }
       
        
        return ans;
    }
};