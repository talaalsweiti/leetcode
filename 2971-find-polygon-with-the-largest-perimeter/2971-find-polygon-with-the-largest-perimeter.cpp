class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans = 0 , sum =0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        ans=sum;
        for(int i=nums.size()-1 ; i >-1 ; i--){
            if(sum-nums[i] <= nums[i]){
                sum-=nums[i];
                ans=sum;
                if(i<=2) return -1;
            }
        }
        return ans;
    }
};

/*

[1,12,1,2,5,50,3]

1,1,2,3,5,12,50

*/