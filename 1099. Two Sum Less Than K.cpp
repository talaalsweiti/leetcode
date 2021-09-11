class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        int maxSum = -1;
        sort(nums.begin(),nums.end());
        int left =0 , right=nums.size()-1;
        while(left<right) {
            if(nums[left]+nums[right]< k) {
                maxSum=max(maxSum,nums[left]+nums[right]);
                left++;
            } 
            else {
                right--;
            }
         
        }
        return maxSum;
    }
};

/*


[34,23,1,24,75,33,54,8]

1 , 8 , 23 , 24 , 33 , 34 , 54 , 75
76 > 60

*/
