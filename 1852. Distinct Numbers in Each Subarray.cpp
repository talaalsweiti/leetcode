class Solution {
public:
    vector<int> distinctNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> count;
        int left =0;
        for(int i=0;i<n;i++) {
            count[nums[i]]++;
            if(i>=k-1){
                ans.push_back(count.size());
                 count[nums[left]]--;
                if(!count[nums[left]]) {
                    count.erase(nums[left]);
                }
                left++;
               
            }
        }
        return ans;
    }
};
