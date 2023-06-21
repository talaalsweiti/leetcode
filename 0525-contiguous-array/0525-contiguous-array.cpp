class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0 , count =0;
        map<int,int> mp;
        mp[0] =-1;
        for(int i=0;i<nums.size();i++) {
            count += nums[i] ? 1 : -1;
            if(mp.find(count)!=mp.end()) {
                ans=max(ans,i-mp[count]);
            }else{
               mp[count] = i; 
            }
        }
        return ans;
    }
};