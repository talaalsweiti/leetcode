class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int sum = target - nums[i];
            if(mp.find(sum)!=mp.end()){
                return {mp[sum],i};
            }
            mp[nums[i]] = i;
            
        }
        return {};
    }
};

/*
we can use hash map, and check if traget-num[i] exists in nums -> O(n) space and complixety, where n is the array size

[2,7,11,15] , 9

mp[2] = 0


*/