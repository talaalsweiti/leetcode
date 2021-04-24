class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
           int n = nums.size();
        vector<vector<int>> result ;
          vector<int> temp ;
          for(int i=0; i< (1 << n); i++)
        {
         temp= {};
            for(int j=0; j<n; j++)
            {
                if(((1<<j)&i)!=0) {
                  temp.push_back(nums[j]);
                }
 
              
            }
            
        sort(temp.begin(),temp.end());
              result.push_back(temp);
        
        }
        
      sort(result.begin(), result.end());
      result.erase(unique(result.begin(), result.end()), result.end());
        
       return result; 
    }
};
