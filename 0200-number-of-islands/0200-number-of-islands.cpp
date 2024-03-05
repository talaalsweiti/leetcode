class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
    bool checkIsland(int i,int j,vector<vector<char>>& grid){
        if(i >= grid.size() || i < 0 || j >= grid[i].size() || j<0) return false;
        return grid[i][j] == '1';
    }
    void markVisitedIsland(int i,int j,vector<vector<char>>& grid){
        grid[i][j]= '0';
        for(int k=0;k<4;k++){
            if(checkIsland(i+dx[k],j+dy[k],grid)){
                markVisitedIsland(i+dx[k],j+dy[k],grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0 ;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    markVisitedIsland(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};