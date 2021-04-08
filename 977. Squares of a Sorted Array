class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int j=nums.size()-1;
        for(int i=0;i<j;i++,j--) {
            result.push_back(nums[i]*nums[i]);
              result.push_back(nums[j]*nums[j]);
        }
        if(nums.size()%2!=0)
         result.push_back(nums[j]*nums[j]);
        sort(result.begin(),result.end());
        return result;
    }
};
