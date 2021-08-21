class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int num : arr) {
            mp[num]++;
        }
        for(auto const &x : mp ) {
            pq.push({x.second,x.first});
        }
        int ans = pq.size();
        while(!pq.empty()) {
            if(k>=pq.top().first) {
                k-=pq.top().first;
                pq.pop();
                ans--;
            }
            else break;
        }
        return ans;
    }
};
