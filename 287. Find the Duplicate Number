class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = (int)nums.size();
       vector<int> arr(n+1,0);
        for(int i=0;i<nums.size();i++) {
          arr[nums[i]]++;
            if(arr[nums[i]]==2) return nums[i];
        }
        return 0 ;
    }
};
