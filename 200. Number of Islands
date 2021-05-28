class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result =0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j]=='1') {
                    // cout << i << " " << j << endl;
                    result++;
                    helper(i, j,grid);
                }
            }
        }
        return result;
    }
    
    void helper(int i , int j,vector<vector<char>>& grid) {
        grid[i][j]='0';
        int dx[4] =  {1,-1,0,0};
        int dy[4] = { 0,0,1,-1};
        for(int r =0;r<4;r++){
            if(check(i+dx[r],j+dy[r],grid)) helper(i+dx[r] , j+dy[r],grid);
        }
        
    }
    
    bool check(int i , int j,vector<vector<char>>& grid){
        if(i<0|| i>grid.size()-1) return false;
        if(j<0|| j>grid[0].size()-1) return false;
        if(grid[i][j]=='0') return false;
        return true;
    }
    
    
};


    

