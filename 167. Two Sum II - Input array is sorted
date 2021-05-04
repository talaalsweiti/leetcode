class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l =0;
        int r = nums.size()-1;
        while(l<r){
            int sum =nums[l]+nums[r]; 
            if(sum==target){
               int index = 0,index2 = 0;
                bool flg1 = false , flg = false;
                
                for(int i=0;i<nums.size();i++) {
                    if(nums[l]==nums[i]&&!flg1){
                        index=i; 
                    flg1 = true;
                    }
                    else if(nums[i]==nums[r]&&!flg){
                        index2=i; 
                        flg=true;
                    }
                    if(flg&&flg1)
                        break;
                       
                }
                ans.push_back(index+1);
                ans.push_back(index2+1); 
                break;
            }
            else if(sum<target)
                l++;
            else
                r--;
        }
        
    return ans;
    }
};
