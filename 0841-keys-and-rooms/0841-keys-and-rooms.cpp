class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n,0);
        queue<int>q;
        q.push(0);
        while(!q.empty()) {
            int front = q.front();
            q.pop();
            visited[front] =1;
            for(int i=0;i<rooms[front].size();i++) {
                if(!visited[rooms[front][i]]) {
                    q.push(rooms[front][i]);
                }
            }
        }
        for(int i=0;i<visited.size();i++) {
            if(!visited[i]) return false;
        }
        return true;
        
    }
};

/*


Input: rooms = [[1],[2],[3],[]]

1 -> 2

Input: rooms = [[1,3],[3,0,1],[2],[0]]


0 -> 1,3
1 -> 1,3,0


*/
