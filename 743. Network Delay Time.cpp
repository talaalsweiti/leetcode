class Solution {
public:
    void dij(vector<vector<int>> graph, map<pair<int,int>,int> cost,int k,vector<int>&cost_ ,map<int,int>& dist)
    {
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
       pq.push({0, k});
        
       while(!pq.empty())
       {
           auto p = pq.top();
           pq.pop();
           int crnt_cost = p.first, node = p.second;
           if(dist.find(node)!=dist.end()) continue;
           dist[node]=crnt_cost;
           for(int x : graph[node])
           {
               int to_go_cost = crnt_cost;
               to_go_cost += cost[ {node,x}];
               if(to_go_cost < cost_[x])
               {
                   cost_[x] = to_go_cost;
                   if(dist.find(x)==dist.end())
                   pq.push({to_go_cost, x});
               }
           }
       }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> graph(n+1,vector<int>());
        map<pair<int,int>,int> cost;
        vector<int> cost_(n+1,INT_MAX); 
        for(int i=0;i<times.size();i++) {
            cost[{times[i][0],times[i][1]}] = times[i][2];
            graph[times[i][0]].push_back(times[i][1]);
        }
        map<int,int> dist;
        dij(graph,cost,k,cost_,dist);
        int ans = 0;
        if(dist.size()!=n) return -1;
       for(auto x : dist) {
            ans=max(ans,x.second);
       }
       
        return !ans ? -1 : ans ;
    }
};


/*

[[1,2,1],[2,1,3]]
2
2

1->2 = 1
2->1

*/
