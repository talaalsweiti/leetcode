class Solution {
public:
    bool check(int x,int y , vector<vector<int>>& grid){
        if(x<0 || x>=grid.size()) return false;
        if(y<0 || y>=grid[0].size()) return false;
        if(grid[x][y]!=1) return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = -1;
        int fresh = 0;
        queue<pair<int,int>> rotten;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    rotten.push({i,j});
                    grid[i][j] = 0;
                }else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(rotten.empty()&&fresh) return -1;
        if(!fresh) return 0;
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        int current = rotten.size() , next= 0; 
        while(!rotten.empty()){
            pair<int,int> front = rotten.front();
            rotten.pop();
            current--;
            for(int i=0;i<4;i++){
                if(check(front.first+dx[i],front.second+dy[i],grid)){
                    fresh--;
                    rotten.push({front.first+dx[i],front.second+dy[i]});
                    next++;
                    grid[front.first+dx[i]][front.second+dy[i]]=0;
                }
            }
            if(!current){
                swap(next,current);
                ans++;
            }
        }
        
        return fresh ? -1 : ans;
    }
};

/*

m x n 
0 1 2


[2,1,1]
[1,1,0]
[0,1,1]


*/