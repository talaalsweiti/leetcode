class Solution {
public:
    void bfs(vector<vector<int>>& grid,int i,int j) {
        queue<pair<int,int>>q;
        int dx[4] = {1,-1,0,0};
        int dy[4]={0,0,1,-1};
        q.push({i,j});
        grid[i][j]=1;
        while(!q.empty()) {
            pair<int,int> front = q.front();
            q.pop();
            for(int k=0;k<4;k++) {
                if(front.first+dx[k]<0 ||front.first+dx[k]>=grid.size()) continue;
                if(front.second+dy[k]<0 ||front.second+dy[k]>=grid[0].size()) continue;
                if(grid[front.first+dx[k]][front.second+dy[k]]) continue;
                q.push({front.first+dx[k],front.second+dy[k]});
                grid[front.first+dx[k]][front.second+dy[k]]=1;
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0 ;
   
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(!grid[i][j]){
                    bfs(grid,i,j);
                }
                if(i==0||i==grid.size()-1 ||  j==grid[i].size()-1) continue;
                j=grid[i].size()-1;
                j--;
            }
        }

        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(!grid[i][j]){
                    bfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
