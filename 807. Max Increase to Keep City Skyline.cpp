class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sum =0;
        for(int i=0 ; i< grid.size() ; i++ ) {
            for(int j=0;j<grid[0].size();j++) {
                int max =    grid[i][j] ;
                for(int k = 0 ; k < grid.size() ; k++) {
                    if(   grid[i][k] > max) {
                        max =   grid[i][k] ;
                    }
                }
                int max2 =    grid[i][j]; 
                 for(int k = 0 ; k < grid.size() ; k++) {
                    if(  grid[k][j]> max2) {
                        max2 =    grid[k][j] ;
                    }
                }
                int  mini = min(max,max2);
                if(mini>grid[i][j])
                sum+=(mini-grid[i][j]); 
                
            }
        }
    return  sum ;
    }
};
