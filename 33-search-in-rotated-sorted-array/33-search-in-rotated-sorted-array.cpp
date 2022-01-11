class Solution {
public:
    int binarySearch(int left,int right,int target,vector<int>& nums){
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = 0;
        int left =0 , right = nums.size()-1;
        while(left<right) {
            int mid = (left+right) /2;
            if(nums[mid]>nums[mid+1]){
                pivot=mid+1;
                break;
            }else if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        //serach from start to pivot (fisrt half)
        int ans = binarySearch(0,pivot,target,nums);
         //search from pivot to end (last half)
        if(ans==-1)
            ans = binarySearch(pivot,nums.size()-1,target,nums);
        return ans;
    }
};
/*
[2,4,5,6,7,0,1]
[6,7,0,1,2,4,5] 

AAADAA






*/