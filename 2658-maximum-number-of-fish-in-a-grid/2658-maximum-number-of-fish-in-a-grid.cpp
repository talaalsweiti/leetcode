class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    bool checkCell(int i,int j,vector<vector<int>>& grid){
        if(i >= grid.size() || i<0 || j >= grid[i].size() || j <0){
            return false;
        }
        return grid[i][j] != 0 ;
    }
    int getFishes(int i,int j,vector<vector<int>>& grid, map<pair<int,int>,int> &visited){
        int fishes = grid[i][j];
        visited[{i,j}] =1;
        for(int k=0;k<4;k++){
            if(checkCell(i+dx[k],j+dy[k],grid) && !visited[{i+dx[k],j+dy[k]}]){
                fishes += getFishes(i+dx[k],j+dy[k],grid,visited);
            }
        }
        
        return fishes;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>0){
                    map<pair<int,int>,int> visited;
                    ans = max(ans,getFishes(i,j,grid,visited));
                }
            }
        }
        return ans;
    }
};