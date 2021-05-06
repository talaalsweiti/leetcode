class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(nums.size(), 0);
        vector<int> cpy(nums.begin(), nums.end()); 
        sort(((nums).begin()), ((nums).end())); 
        for(int i=0;i<nums.size();i++){
            int index = lower_bound(((nums).begin()), ((nums).end()) ,cpy[i] ) - nums.begin();
            cnt[i] = index;
         }
        return cnt;
    }
};
