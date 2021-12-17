class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> paths =  obstacleGrid;
        int m = obstacleGrid.size() , n = obstacleGrid[0].size();
        if(paths[m-1][n-1] ||paths[0][0] ) return 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(paths[i][j]==1){
                    paths[i][j]=-1;
                }
            }
        }
        paths[0][0] =1;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                if(paths[i][j]==-1) continue;
                if(i-1>=0 && paths[i-1][j]!=-1) paths[i][j]+=paths[i-1][j];
                if(j-1>=0 && paths[i][j-1]!=-1) paths[i][j]+=paths[i][j-1];
            }
        }
        return paths[m-1][n-1];
    }
};
/*
[[1,1,1],
[1,-1,1],
[1,1,2]]

[[0,0],
[0,1]]
*/
