class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = nums.size()-1;
        int current =0;
        while(current<=left){
            if(nums[current]==val){
                swap(nums[current],nums[left]);
                left--;
            }else{
                current++;
            }
        }
        return current;
    }
};