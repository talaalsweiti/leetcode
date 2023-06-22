class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size()) ;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
           pq.push({score[i],i});
        }
        int i = 1;
        while(pq.size()){
            if(i==1){
                ans[pq.top().second] = "Gold Medal";
            }else if(i==2){
                ans[pq.top().second] = "Silver Medal";
            }else if(i==3){
                ans[pq.top().second] = "Bronze Medal";
            }else{
                 ans[pq.top().second] = to_string(i);
            }
            pq.pop();
            i++;
        }
        return ans;
    }
};