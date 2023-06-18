class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i]) - 1]*=-1;
            }else{
                ans.push_back(abs(nums[i]));
            }
        }
        
        return ans;
    }
};
/*
[4,-3,-2,-7,8,2,3,1]
 0 1 2 3 4 5 6 7 
 
7 -> -7
2 -> -2
3 -> -3

[10,-2,5,10,-9,1,1,4,3,-7]
 0  1  2  3 4 5 6 7 8 9 
 

*/