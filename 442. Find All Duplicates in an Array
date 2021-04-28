class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
         vector<int> occ(n+1,0);
        for(int i=0;i<n;i++) {
          occ[nums[i]]++;
          if( occ[nums[i]]==2 ) {
              ans.push_back(nums[i]);  
          } 
        }
        return ans;
    }
};
