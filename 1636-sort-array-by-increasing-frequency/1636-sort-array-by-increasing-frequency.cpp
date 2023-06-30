class Solution {
    class Compare {
    public:
       bool operator()(pair<int,int> a, pair<int,int>  b){
        if(a.first==b.first) return a.second<b.second;
        return a.first > b.first;
      }
};
public:
   
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int,int> cnt;
        for(int num:nums)cnt[num]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> pq;
        for(auto &x:cnt){
            pq.push({x.second,x.first});
        }
        while(pq.size()){
            pair<int,int> top = pq.top();
            while(top.first--)
            ans.push_back(top.second);
            pq.pop();
        }
        return ans;
    }
};