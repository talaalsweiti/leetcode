class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] =-1;
        int sum =0;
        int ans =0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
             if(mp.find(sum)==mp.end()){ //if there's duplicates we dont want to update the index
                 //becuase we want the longest subbarray 
                mp[sum] =i;
            }
            if(mp.find(sum-k)!=mp.end()){
                ans = max(ans,i-mp[sum-k]);
            }
           
           
        }
        /*
        [1,-1,5,-2,3]
        0,1,0,5,3,6
        mp[0] = 0
        mp[1] = 1
        mp[0] = 2
        mp[5] = 3
        mp[] ,4
               4 - 2  = 2   
        */
       return ans;
    }
};
