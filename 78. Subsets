class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result ;
          for(int i=0; i< (1 << n); i++)
        {
              
           vector<int> temp ;
            for(int j=0; j<n; j++)
            {
                if(((1<<j)&i)!=0) {
                  temp.push_back(nums[j]);
                }
 
              
            }
              result.push_back(temp);
        
        }
       return result; 
    }
};
