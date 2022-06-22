class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};

/*

[3,2,1,5,6,4]




min

2
3
5
*/