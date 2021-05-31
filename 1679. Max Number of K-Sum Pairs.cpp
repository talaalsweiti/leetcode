class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int result =0;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            int temp = k - nums[i];
            if((mp[temp]>0 && nums[i]!=temp && mp[nums[i]]>0) || (mp[temp]>1 && nums[i]==temp)) {
                result++;
                mp[temp]--;
                mp[nums[i]]--;
                
            }
            
        }
   
        
     return result;   
        
    }
};
