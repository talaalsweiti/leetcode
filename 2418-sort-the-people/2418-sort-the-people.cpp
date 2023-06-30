class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        priority_queue<pair<int,string>>pq;
        for(int i=0;i<heights.size();i++) pq.push({heights[i],names[i]});
        while(pq.size()){
            string name = pq.top().second;
            ans.push_back(name);
            pq.pop();
        }
        
        return ans;
    }
};