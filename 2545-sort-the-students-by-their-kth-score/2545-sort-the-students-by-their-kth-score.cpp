class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i][k],i});
        }
        vector<vector<int>>ans;
        while(pq.size()){
            pair<int,int> top = pq.top();
            pq.pop();
            ans.push_back(score[top.second]);
        }
        
        return ans;
    }
};