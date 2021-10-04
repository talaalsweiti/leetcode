class Solution {
public:
    /*
8
0
[-1,5,0, 6,7,0,0,0]
[89,0,0,0,0,523,241,519]

        0
    2  5  6  7 //89+523+241
       1  3  4 


    */
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans =0 ;
        vector<vector<int>> graph(n);
        for(int i=0;i<n;i++) {
            if(manager[i]!=-1)
            graph[manager[i]].push_back(i);
        }
        queue<pair<int,int>> q;
        q.push({headID,0});
        int sum =0;
        while(!q.empty()) {
            pair<int,int> front = q.front();
            q.pop();
            int cost = front.second;
            ans=max(cost,ans);
            for(int i =0;i<graph[front.first].size();i++){
                q.push({graph[front.first][i],cost+informTime[front.first]});
               
            }
         
        }
        return ans;
    }
};
