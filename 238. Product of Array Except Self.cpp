class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int vecMul =  1;
        bool flg = false;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                vecMul*=nums[i];
            }
            else {
                flg = true;
                cnt++;
            }
        }
        vector<int> result = nums;
        if(cnt==nums.size()) return nums;
        for(int i=0;i<nums.size();i++) {
            if(result[i]==0&&cnt==1)
            result[i] = vecMul;
            else if(result[i]!=0 && !flg) {
                result[i] = vecMul/result[i] ;
            }
            else if(result[i]!=0 && flg) {
                 result[i] = 0;
            }
        }
        return result;
    }
};
