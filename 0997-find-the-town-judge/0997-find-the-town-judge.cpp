class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1&&trust.size()==0) return 1;
        map<int,vector<int>> mp;
        map<int,int> visited;
        
        for(int i=0;i<trust.size();i++){
            mp[trust[i][1]].push_back(trust[i][0]);
            visited[trust[i][0]] =1;
        }
        int num = -1;
        for(auto &x:mp){
            if(x.second.size()==n-1&&num!=-1) return -1;
            if(x.second.size()==n-1){
                num=x.first;
            }
        }
        return visited[num] ? -1 : num;
    }
};