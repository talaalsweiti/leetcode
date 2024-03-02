class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left = 0 ;
        int right = n-1;
        int i = n-1;
        //[-4,-1,0,3,10]

        while(left<=right){
            if(abs(nums[left]) > abs(nums[right])){
                ans[i] = pow(nums[left],2);
                left++;
                
            }else{
                ans[i] = pow(nums[right],2);
                right--; 
            }
            i--;
        }
        
        return ans;
        
    }
};

/*
[0,2]

[-4,-1,0,3,10]

[,100]
 
*/