class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++) {
          for(int j=i+1;j<nums.size();j++) {
              if(nums[i]==nums[j])
                  cnt++;
          }
        }
     
        return cnt;
    }
};
