class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int window = 0 ;
        for(int i=0;i<nums.size();i++) {
            int l =0;
            int r = window ;
            int temp =0;  
            while(l<=window) {
                temp+=nums[l];
                l++;
            }    
            l=0;
            if(temp>=target)return window+1;
            for(int j=window+1;j<nums.size();j++) {
                temp-=nums[l];
                temp+=nums[j];
                if(temp>=target)return  window+1;
                l++;
            }
            window++;
        }
        return 0;
    }
};
