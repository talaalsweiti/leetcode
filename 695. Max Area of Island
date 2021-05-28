class Solution {
public:
    int max =0;
    int count =0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j]) {
                    // cout << i << " " << j << endl;
                    //result++;
                    helper(i, j,grid);
                    if(max<count)max=count;
                    count =0;
                }
            }
        }
        return max;
    }
    
    void helper(int i , int j,vector<vector<int>>& grid) {
        grid[i][j]=0;
        count++;
        int dx[4] =  {1,-1,0,0};
        int dy[4] = { 0,0,1,-1};
        for(int r =0;r<4;r++){
            if(check(i+dx[r],j+dy[r],grid)) helper(i+dx[r] , j+dy[r],grid);
        }
        
    }
    
    bool check(int i , int j,vector<vector<int>>& grid){
        if(i<0|| i>grid.size()-1) return false;
        if(j<0|| j>grid[0].size()-1) return false;
        if(!grid[i][j]) return false;
        return true;
    }
};a
