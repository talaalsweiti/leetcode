class Solution {
public:
    int dfs( vector<int>& visited, vector<vector<int>>& graph,int node ){
        visited[node] = 1;
        int count= 1; // to keep track of the number of nodes in this component, initialized to 1  to count node itself.
        for(int i=0;i<graph[node].size();i++){
            if(!visited[graph[node][i]]){
                count+=dfs(visited,graph,graph[node][i]);
            }
        }
        return count;
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long ans = 0 ;
        //generate the graph
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(n,0);
        
        long long numberOfPairs = 0; //to count the number of unreachable node pairs
        long long sizeOfComponent = 0; //to store the number of nodes in the current component.
        long long remainingNodes = n;// to keep track of the number of unvisited nodes in the graph after each DFS traversal
        for(int i=0;i<n;i++){
                if(!visited[i]){
                    sizeOfComponent=dfs(visited,graph,i);
                    numberOfPairs += sizeOfComponent * (remainingNodes - sizeOfComponent);
                    remainingNodes -= sizeOfComponent;
                    
                }
        }
      
       return numberOfPairs;
    }
};