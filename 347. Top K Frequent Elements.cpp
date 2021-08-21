class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequncy;
        priority_queue<pair<int, int> > pq;
        vector<int> result;
        for(int i=0;i<nums.size();i++) {
            frequncy[nums[i]]++;
            
        }
        for(auto const &x:frequncy) {
            pq.push({x.second,x.first});
        }
        while(k){
            result.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return result;
    }
};
