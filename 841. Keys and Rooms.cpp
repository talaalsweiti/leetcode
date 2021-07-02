class Solution {
public:
    unordered_map<int,bool> visited;
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       dfs(rooms,0);
       for(int i =0;i< rooms.size() ;i++) {
           if(!visited[i]) return false;
       }
        return true;
    }
    void dfs(vector<vector<int>>& rooms , int node) {
        visited[node] = true;
        for(int i=0;i<rooms[node].size();i++ ) {
            if(!visited[rooms[node][i]]) {
                dfs(rooms,rooms[node][i]);
            }
        }
    }
};
