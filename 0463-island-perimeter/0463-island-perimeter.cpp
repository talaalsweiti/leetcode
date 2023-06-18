class Solution {
public:
    int x[4] ={1,0,-1,0};
    int y[4]={0,1,0,-1};
    
    bool check(int i,int j,vector<vector<int>>& grid) {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()) return false;
        return grid[i][j]==1;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        int ans =0 ;
        queue<vector<int>>q;
        for(int i=0;i<grid.size() && q.empty();i++) {
            for(int j=0;j<grid[i].size()&& q.empty();j++){
                if(grid[i][j]==1){
                    q.push({i,j,4});
                }
            }
        }
        while(!q.empty()) {
            vector<int> front = q.front();
            q.pop();
            visited[front[0]][front[1]] =1;
            
            for(int i=0;i<4;i++) {
                if(check(front[0]+x[i],front[1]+y[i],grid)) {
                    front[2]--;
                    if(! visited[front[0]+x[i]][front[1]+y[i]] ){
                        q.push({front[0]+x[i],front[1]+y[i],4});
                         visited[front[0]+x[i]][front[1]+y[i]]=1;
                    }
                }
            }
            // cout << front[2] << " " <<endl;
            ans+=front[2];
            
        }
        
        
        return ans;
        
    }
};