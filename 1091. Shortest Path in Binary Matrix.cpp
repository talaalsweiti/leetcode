class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]) return -1;
        int ans =1;
        queue<pair<int,int>> q;
        int dx[8] = {1,-1,0,0,1,-1,-1,1};
        int dy[8] = {0,0,1,-1,1,-1,1,-1};
        int n =grid.size() , m =grid[0].size();
        int current =1 , next=0;
        q.push({0,0});
        while(!q.empty()) {
            pair<int,int> front = q.front();
            q.pop();
            current--;
            int x =front.first , y = front.second;
            if(x==n-1&&y==m-1) return ans;
            grid[x][y] =1;
            for(int i=0;i<8;i++) {
                if(x+dx[i]<0 || x+dx[i]>=n) continue;
                if(y+dy[i]<0 || y+dy[i]>=m) continue;
                if(grid[x+dx[i]][y+dy[i]]) continue;
                q.push({x+dx[i],y+dy[i]});
                grid[x+dx[i]][y+dy[i]]=1;
                next++;
            }
            if(!current){
                swap(next,current);
                ans++;
            }
        }
        return -1;
    }
};

/*




0 0  0 1  0 2
1 0  1 1  1 2
2 0  2 1  2 2

1 1 -> 0 2 . -1 +1
1 1 -> -1 -1 , +1 +1
+1 ,-1





*/
