class Solution {
public:
    int minDifference(vector<int>& nums) {
        /*
        We have 4 plans:
        kill 3 biggest elements
        kill 2 biggest elements + 1 smallest elements
        kill 1 biggest elements + 2 smallest elements
        kill 3 smallest elements
        
        0 1 5 10 14
        */
        int n =nums.size();
        if(n<=3) return 0;
        sort(nums.begin(),nums.end());
        int minimum =INT_MAX;
        int start[4] = {0,1,2,3};
        int end[4] = {n-3,n-2,n-1,n};
        for(int i=0;i<4;i++) {
            int smallest =INT_MAX, largetst = INT_MIN;
            for(int j=start[i];j<end[i];j++){
                smallest = min(smallest,nums[j]);
                 largetst = max(largetst,nums[j]);
            }
            minimum=min(minimum,largetst-smallest);
        }

        return minimum;
        
    }
};
