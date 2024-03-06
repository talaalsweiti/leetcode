class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int num:nums){
             pq.push(num);
        }
           
        while(pq.size()&& pq.top() < k){
            long top1 = pq.top();
            pq.pop();
            long top2 = pq.top();
            pq.pop();
            
            pq.push(top1*2+top2);
            ans++;
            
        }

        return ans;
    }
};