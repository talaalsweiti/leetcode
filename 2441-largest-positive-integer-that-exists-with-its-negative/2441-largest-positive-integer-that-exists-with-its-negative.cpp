class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(),nums.end());
        int left =0 , right = nums.size()-1;
        while(left<right){
            if(nums[left]*-1==nums[right]){
                ans = nums[right];
                break;
            } else if(nums[left]*-1>nums[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};