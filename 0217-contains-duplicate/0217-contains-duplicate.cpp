class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> cnt;
        for(int num:nums){
            cnt[num]++;
            if(cnt[num]>=2) return true;
        }
        return false;
    }
};