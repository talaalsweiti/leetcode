//after 10 wrong submissions :)))

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > anss;
         if(nums.size()<3) return anss;
        map<vector<int>, int> mp;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++) {
            int num1 = 0 - nums[i];
            int l = i+1;
            int r = nums.size()-1;
            while(l<r) {
                int sum = nums[l] + nums[r];
                if(sum==num1)
                {
                    vector<int>temp={nums[i],nums[l],nums[r]};
                    mp[temp]++;          
                   if(mp[temp]==1)
                        anss.push_back(temp);              
                    l++;
                   r--;
                }
                else if(sum>num1){
                    r--;
                }
                else{
                      l++;
                }
            }
        }
     
    return anss;
    }
};
