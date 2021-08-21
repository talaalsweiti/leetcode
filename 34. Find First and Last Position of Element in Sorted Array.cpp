class Solution {
public:
    int findIndex(vector<int>& nums, int target,bool isFirst) {
        int low = 0 ;
        int high = nums.size()-1;
        int index =-1;
        
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                index= mid;
                if(isFirst) {
                     high = mid-1; // search behind to find the first index of target
                }
                else{
                  low = mid+1;// search ahead to find the last index of target
                } 
            }
            else if(nums[mid]<target) {
                low = mid+1; 
            }
            else{
                high = mid-1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        result[0] = findIndex(nums,target,true);
        result[1] = findIndex(nums,target,false);
        return result;
    }
};
