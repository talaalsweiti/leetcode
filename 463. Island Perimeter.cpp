class Solution {
public:
    bool check(int i,int j ,vector<vector<int>>& grid){
        int m = grid.size() , n = grid[0].size();
        if(i>=m || i<0) return false;
        if(j<0 || j >= n) return false;
        if(!grid[i][j])return false;
        return true;
    }
    void dfs(vector<vector<int>>& grid,int i,int j , map<pair<int,int> ,bool>&visit,int& ans) {
        visit[{i,j}] = 1;
        int sum = 4;
        int dx[4] ={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int k=0;k<4;k++) {
            if(check(i+dx[k],j+dy[k],grid) && !visit[{i+dx[k],j+dy[k]}] ){
                dfs(grid,i+dx[k],j+dy[k],visit,ans);
            }
            if(check(i+dx[k],j+dy[k],grid)) sum--;
        }
        ans+=sum;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        map<pair<int,int> ,bool> visit;
        int ans =0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[i].size();j++) {
                if(grid[i][j]&&!visit[{i,j}]){
                    dfs(grid,i,j,visit,ans);
                }
            }
        }
        return ans;
    }
};
