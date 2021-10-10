class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        /*
        0 represents a sea 
        1 represents a land 
        
        
        
        0,0 0,1 ..... .. 0,n-1
        1,0              1,n-1   
        2,0              2 , n-1
        3,0                 .
        .                   .
        .                   .   
        m-1,0 m-1,1 . ..  . m-1,n-1           
        */
        
        //mark the boreder land sells
        map<pair<int,int>,bool> visit;
        stack<pair<int,int>> st;
        int m = grid.size() , n = grid[0].size();
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1){
                    st.push({i,j});
                    while(!st.empty()){
                        pair<int,int> top = st.top();
                        visit[{top.first,top.second}]= true;
                        st.pop();
                        for(int k=0;k<4;k++) {
                            if(top.first+dx[k]<0 || top.first+dx[k]>=m) continue;
                            if(top.second+dy[k]<0 || top.second+dy[k]>=n) continue;
                            if(grid[top.first+dx[k]][top.second+dy[k]] && !visit[{top.first+dx[k],top.second+dy[k]}]){
                                st.push({top.first+dx[k],top.second+dy[k]});
                            }
                        }
                    }
                }
                if(i==0 || i==m-1) continue;
                else  {
                    if(j!=n-1){
                        j=n-1; 
                        j--;
                    }
                   
                } 
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(!visit[{i,j}] && grid[i][j]) ans++;
            }
             
        }
        
        
        return ans;
        
        
    }
};
