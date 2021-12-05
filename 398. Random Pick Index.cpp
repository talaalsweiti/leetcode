class Solution {
public:
    map<int,vector<int>> numbers;
    Solution(vector<int>& nums) {
        for(int i=0;i< nums.size();i++) {
            numbers[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        vector<int> indices = numbers[target];
        return indices[rand()%indices.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
