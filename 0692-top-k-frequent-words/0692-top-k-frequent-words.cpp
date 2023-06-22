class Solution {
public:
    struct myComp {
    constexpr bool operator()(
        pair<int, string> const& a,
        pair<int, string> const& b)
        const noexcept
    {
        if(a.first==b.first)
        return a.second > b.second;
        return a.first < b.first;
    }
};
 
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,myComp>pq;
        map<string,int> mp;
        vector<string> ans;
        for(int i=0;i<words.size();i++) {
            mp[words[i]]++;
        }
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        while(!pq.empty() && k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

