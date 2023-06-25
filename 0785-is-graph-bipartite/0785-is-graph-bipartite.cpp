class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        queue<int> q;
        //0 for not colored , -1 for blue , 1 for red
        vector<int> colors(n,0); 
        
        for(int i=0;i<n;i++) {
            if(colors[i]) continue;
            colors[i] =1;
            q.push(i);
            
            while(!q.empty()) {
                int front = q.front();
                q.pop();
                for(int j=0;j<graph[front].size();j++) {
                    if(!colors[graph[front][j]]){
                        colors[graph[front][j]] = -colors[front];
                        q.push(graph[front][j]);
                    } else if(colors[graph[front][j]]==colors[front]) return false;
                }
            }
        }
        
        
        
        return true;
    }
};