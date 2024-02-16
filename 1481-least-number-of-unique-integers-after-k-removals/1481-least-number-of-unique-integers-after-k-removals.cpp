
  
class Solution {
public:
    struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second > b.second;
    }
};
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> cnt;
        for(int num:arr){
            cnt[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp> pq;
        
        for(auto &x:cnt){
            pq.push({x.first,x.second});
        }
         while (!pq.empty() && k--) {
            pair<int,int> top= pq.top();
             pq.pop();
             top.second--;
            if(top.second>0){
                pq.push(top);
                
            }
           
                
        }
     return pq.size();   
    }
};

/*

 [4,3,1,1,3,3,2], k = 3



*/