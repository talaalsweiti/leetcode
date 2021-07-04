class Solution {
public:
    vector<vector<int>> result;
    vector<int> temp;
    void dfs(vector<vector<int>>& graph,  int node) {
    temp.push_back(node);
    if(node==graph.size()-1){
        result.push_back(temp);
    }
    else 
    for(int i=0;i<graph[node].size();i++) {
        dfs(graph,graph[node][i]);
        temp.pop_back();
        }
    
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       dfs(graph,0);
        return result;
    }
};
