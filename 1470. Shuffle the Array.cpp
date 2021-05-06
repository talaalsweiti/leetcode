class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n==1)return nums ;
        vector<int> result ;
        int temp = n;
        for(int i=0;i<n && temp<2*n;i++) {
            result.push_back(nums[i]);
            result.push_back(nums[temp]);
            temp++;
        }
    return result;
        
    }
};
