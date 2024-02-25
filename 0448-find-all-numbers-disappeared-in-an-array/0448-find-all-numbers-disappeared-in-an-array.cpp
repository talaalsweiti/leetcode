class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0){
               nums[abs(nums[i])-1]*=-1; 
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};

/*



[4,3,2,7,8,2,3,1]


-1*nums[nums[i]-1]
nums[nums[0]-1] = nums[4-1] = 7*-1 = -7 (this means we found 4)
nums[nums[1]-1] = nums[3-1] = 2*-1 = -2  
nums[nums[2]-1] = nums[2-1] = 3*-1 = -3  
nums[nums[3]-1] = nums[7-1] = *-1 =  
nums[nums[4]-1] = nums[8-1] = *-1 = 
nums[nums[5]-1] = nums[2-1] = 
nums[nums[6]-1] = nums[3-1] = 
nums[nums[7]-1] = nums[1-1] = 


we found 4,3,2 
*/