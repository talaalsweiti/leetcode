class Solution {
public:
    int unvisited=0 , visiting = 1 , visited=2;
    bool isCycle(int num, vector<vector<int>>& graph ,vector<int>& visit){
        visit[num] = visiting;
        for(int i = 0; i< graph[num].size();i++){
            if(!visit[graph[num][i]]) isCycle(graph[num][i],graph,visit);
            if(visit[graph[num][i]]==visiting) return false;
            
             
        }
        visit[num] = visited;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> visit(numCourses,unvisited);
        for(int i=0;i<prerequisites.size();i++){
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<numCourses;i++){
            if(!isCycle(i,graph,visit)) return false;
        }
        return true;
    }
};