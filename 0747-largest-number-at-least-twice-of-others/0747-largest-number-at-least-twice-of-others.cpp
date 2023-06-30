class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[index]){
                index=i;
            }
        }
        
        for(int num:nums){
            if(nums[index]<num*2 && num!=nums[index])return -1;
        }
        
        return index;
    }
};