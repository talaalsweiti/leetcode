class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> prefixSum;
        prefixSum.push_back(0);
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++) {
            prefixSum.push_back(nums[i]);
        }
        
        for(int i=1;i<prefixSum.size();i++) {
            prefixSum[i]+=prefixSum[i-1];
        }
        int window = 0, left ,right = 1;
        while(window<prefixSum.size()) {
            left = 1 ;
            for(int i=left,j=right;j<prefixSum.size();i++) {
                int sum = prefixSum[j] - prefixSum[i-1]; 
                if(sum>=target) return j-i+1;
                j++;
            }
            right++ ,window++;
        }
        
        return 0;
        /* [2,3,1,2,4,3] 
        0 2 5 6 8 12 15
       */     
    }
};
