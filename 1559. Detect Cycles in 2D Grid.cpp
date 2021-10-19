class Solution {
public:
    bool check(int i,int j ,char c,vector<vector<char>>& grid) {
        if(i<0 || i>=grid.size()) return false;
        if(j<0 || j>=grid[0].size()) return false;
        if(grid[i][j]!=c) return false;
        return true;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        map<pair<int,int>,bool> seen;
       // map<int,int> 
        int dx[4] ={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0 ;i < grid.size() ;i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(!seen[{i,j}]) {
                    // cout << i << " " << j << endl;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(!q.empty()) {
                        pair<int,int> front = q.front();
                        q.pop();
                        if(seen[front])return true;
                        seen[{front}] = true;
                        for(int k=0;k<4;k++) {
                            if(check(front.first+dx[k],front.second+dy[k],grid[i][j],grid)&&!seen[{front.first+dx[k],front.second+dy[k]}]){
                                q.push({front.first+dx[k],front.second+dy[k]});
                                
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};
