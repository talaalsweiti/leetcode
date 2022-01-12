class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int cnt =0;
        int mx = INT_MIN;
        vector<int> lengths(nums.size(),1);
        for(int j=0;j<nums.size();j++) {
            cnt=0;
            for(int i=0;i<j;i++){
                if(nums[j]>nums[i]){
                     lengths[j]= max(lengths[i]+1,lengths[j]);
                     mx=max(lengths[j] ,mx);
                }
            }
           mx=max(lengths[j] ,mx);
        }
      
        return mx;
    }
};