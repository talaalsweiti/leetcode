class Solution {
public:
    bool check(vector<int>& nums) {
      //sorted array
        vector<int> sorted(nums.begin(),nums.end()); 
         vector<int> B(nums.begin(),nums.end()); 
        sort(sorted.begin(),sorted.end());
        //if the array is already sorted
        if(nums==sorted) return true;
       
        int x =0;
        while(x<=nums.size()) {
            for(int i=0;i<nums.size();i++) {
                nums[i] = B[(i+x) % nums.size()];
            }
            
            if(nums==sorted)
            {
                return true;
            }
            x++;
        }
        return false;
       
    }
};
