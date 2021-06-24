class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp = nums;
        int mid = nums.size()/2;
        if(nums.size()%2) mid++;
        
        int k =mid-1;
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++) {
            if(i%2==0) {
                nums[i] = temp[k--];
            }
            else{
                nums[i] = temp[j--];
            }
        }
    
    }
};
