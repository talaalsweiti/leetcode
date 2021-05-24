class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      //44ms
        vector<int> odd;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2!=0) {
                odd.push_back(nums[i]);
                nums.erase(nums.begin()+i); 
                i--;
            }
        }
         nums.insert(nums.end(), odd.begin(), odd.end());
        return nums;
    }
};

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      //8ms
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
         even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
