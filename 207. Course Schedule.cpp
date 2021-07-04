class Solution {
public:
    int unvisited = 0 , visiting = 1 , visited = 2;
    bool dfs(vector<vector<int>>& graph, vector<int>& visit, int course) {
        visit[course] = visiting;
        for(int i=0;i<graph[course].size();i++) {
            if(!visit[graph[course][i]])
            dfs(graph,visit,graph[course][i]);
            if(visit[graph[course][i]]==visiting) return false;
        }
        visit[course]= visited;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> visit(numCourses,unvisited);
        
        for(int i=0;i<prerequisites.size();i++) {
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<graph.size();i++) {
            if(!dfs(graph,visit,i)) return false;   
        }
        return true;
    }
};
