class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0 ;
        //two pointers
        int left = 0 ;
        int lastZero=-1;
        for(int i=0;i<nums.size();i++){
            if(!nums[i]){
                left = lastZero + 1;
                lastZero = i; //update the last zero index
            }
            ans=max(ans,i-left);
        }
        return ans;
    }
};