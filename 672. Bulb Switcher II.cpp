class Solution {
public:
    int flipLights(int n, int presses) {
        vector<int> bulbs(n,1);
        unordered_map[vector<int>,int] visited;
        int current = 1 , next =0 , level = 0 ;
        queue<vector<int>> q;
        q.push(bulbs);
        while(!q.empty()) {
            vector<int> front = q.front();
            visited[front] = 1;
            current--;
            q.pop();
            
        }
    }
};

/*
[on, on, on]

[off,off,off]  = > [on, on, on]

[on,off,on]

[off,on,off]

[off,on,on]


*/
