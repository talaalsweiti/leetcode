class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        /*
        [[0,1,0],
        [0,0,0],
        [0,0,1]]
        
        
        [[1,1,1,1,1],
        [1,0,0,0,1],
        [1,0,1,0,1],
        [1,0,0,0,1],
        [1,1,1,1,1]]
        */
        stack<pair<int,int>> st;
        bool flg = true;
        int minimum = 1;
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        map<pair<int,int>,bool> firstIsland;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size()&&flg;i++) {
            for(int j=0;j<grid[0].size()&&flg;j++) {
                if(grid[i][j]) {
                    flg = false;
                    st.push({i,j});
                    while(!st.empty()) {
                        pair<int,int> top = st.top();
                        st.pop();
                        q.push(top);
                        firstIsland[top]=true;
                        for(int k=0;k<4;k++) {
                            if(top.first+dx[k] < 0 || top.first+dx[k] >= grid.size()) continue;
                            if(top.second+dy[k] < 0 || top.second+dy[k] >= grid[0].size()) continue;
                            if(firstIsland[{top.first+dx[k],top.second+dy[k]}] || !grid[top.first+dx[k]][top.second+dy[k]])continue;
                            st.push({top.first+dx[k],top.second+dy[k]});
                        }
                        
                    }
                }
            }
        }

        int cnt =  0;
        int current = 1 , next = 0;
        while(!q.empty()) {
            int size= q.size();
            cnt++;
            while(size--){
            pair<int,int> front = q.front();
            firstIsland[front]=true;
            q.pop();
            current--;
            for(int k=0;k<4;k++) {
                if(front.first+dx[k] < 0 || front.first+dx[k] >= grid.size()) continue;
                if(front.second+dy[k] < 0 || front.second+dy[k] >= grid[0].size()) continue;
                if(firstIsland[{front.first+dx[k],front.second+dy[k]}])continue;
                if(grid[front.first+dx[k]][front.second+dy[k]]){
                    return cnt-1;
                }
                next++;
                firstIsland[{front.first+dx[k],front.second+dy[k]}] =true;
                q.push({front.first+dx[k],front.second+dy[k]});
            }
           
            }
        }

        return -1; //unreachable 
    }
};
