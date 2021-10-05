class Solution {
public:
    bool check(int i,int j,int m , int n){
        if(i<0 || i>=m || j<0 || j>=n ) return false;
        return true;
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int ans =0 ;
        int dx[4] ={1,0,-1,0};
        int dy[4]={0,1,0,-1};
       
        queue<vector<int>> q;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        q.push({0,0,k});
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
            vector<int> front = q.front();
            if(front[0]==m-1 and front[1]==n-1) return ans;
            
            q.pop();
         
            
            if(grid[front[0]][front[1]]==1){
                if(front[2]>0){
                    front[2]--;
                }
                else{
                    continue;
                }
            }
            
           if(vis[front[0]][front[1]]>=front[2])
                continue;    

            vis[front[0]][front[1]]=front[2];
            
            for(int i=0;i<4;i++) {
                if(!check(front[0]+dx[i],front[1]+dy[i],m,n)) continue;
                
                q.push({front[0]+dx[i],front[1]+dy[i],front[2]});
             
            }
         
        }
               ans++;
        }
        return -1;
    }
};
