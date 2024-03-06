class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum = 0.0 ;
        priority_queue<double> pq;
        for(auto num:nums) {
            sum+=num;
            pq.push(num);
        }
        double half = sum/2.0;
        int ans =0;
        while(pq.size() && sum>half){
            double top = pq.top();
            pq.pop();
            sum-=top/2.0;
            pq.push(top/2.0);
            ans++;
        }
        return ans;
    }
};