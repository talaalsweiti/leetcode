class Solution {
public:
    int helper(vector<vector<int>>& grid,int i ,int j,map<pair<int,int>,bool>& visited,int cnt,int numberOfSteps){
        if(i<0 || i>= grid.size()) return 0;
        if(j<0 || j>= grid[0].size()) return 0;
        if(visited[{i,j}]) return 0;
        //If we reach the target, and number of steps matches the number of empty cells - we found a path.
        if(grid[i][j]==2) return numberOfSteps == cnt ? 1 : 0;  
        
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        
        visited[{i,j}] =true;
        int path = 0;
        for(int k =0;k<4;k++) {
            path+=helper(grid,i+dx[k],j+dy[k],visited,cnt+1,numberOfSteps);
        }
        visited[{i,j}] = false;
        
        return path;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        pair<int,int> start;
        int numberOfSteps = 0;
          
        map<pair<int,int>,bool> visited;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j]==1){
                    start = {i,j};
                } 
                if(grid[i][j]!=-1){
                    numberOfSteps++;
                }else{
                    visited[{i,j}] = true;
                }
            }
        }
    
        return helper(grid,start.first,start.second,visited,1,numberOfSteps);
    }
};
