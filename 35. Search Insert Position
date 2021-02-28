class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return index;
    }
};

//or

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index =0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<target)
            index++;
            else if(nums[i]==target){
                index =i;
            }
            else
                break;
        }
        return index;
    }
};
