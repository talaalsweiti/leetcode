class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++) {
            int k =0;
           while(nums[i]>0) {
               k++;
               nums[i]/=10;
           }
            if(k%2==0)
                sum++;
        }
        return sum;
        
    }
};
