class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 ,right = nums.size()-1;
        while(left<=right){
            int mid = (right+left)/2;
         
            if(nums[mid]==target) return mid;
            if(nums[mid]<target){
                left = mid+1;
            }else{
                right=mid-1;
            }
        }
        return-1;
    }
};
/*
[-1,0,3,5,9,12]
  L L L L E G
  
 [-1,0,3,5,9,12]
   L L G G G G
*/