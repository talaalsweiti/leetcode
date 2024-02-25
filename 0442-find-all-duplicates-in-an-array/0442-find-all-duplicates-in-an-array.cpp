class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1] > 0){
                nums[abs(nums[i])-1]*=-1;
            }else{
                ans.push_back(abs(nums[i]));
            }
        }
        
        return ans;
    }
};
/*

[4,-3,-2,-7,8,2,-3,-1]
 
*/