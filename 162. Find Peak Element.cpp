class Solution {
public:
    bool isDecreasing(vector<int>&nums,int current){
        return (current+1>=nums.size() || nums[current] > nums[current+1]); 
    }
    bool isIncreasing(vector<int>& nums,int current) {
        return (current<0 || !isDecreasing(nums,current));
    }
    int findPeakElement(vector<int>& nums) {
        int left = 0 , right = nums.size()-1;
        while(left<=right) {
            int mid = (left+right) /2;
            if(isIncreasing(nums,mid-1)&&isDecreasing(nums,mid)) return mid;
            if(isIncreasing(nums,mid-1)&&isIncreasing(nums,mid)) {
                left = mid+1;
            } else{
                right = mid-1;
            }
        }
        return left;
    }
};
/*

[1,2,1,3,5,6,4]

IIIIDDDD

CASE 1 : Peak -> I M D , peak found 
CASE 2 : INCREASING -> I M I , search right
CASE 3 : DECREASING -> D M D . search left
CASE 4 : Min Peak -> D M I , serach left or right
*/
