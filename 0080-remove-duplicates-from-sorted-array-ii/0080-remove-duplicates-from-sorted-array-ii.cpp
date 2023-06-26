class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        while(i<nums.size()-1){
             if(nums[i-1]==nums[i+1]){
                nums.erase(nums.begin()+i);   
            }else{
                 i++;
             }
        }
        return nums.size();
       
    }
};