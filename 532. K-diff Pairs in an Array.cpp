class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> numbers;
        for(int i=0;i<nums.size();i++){
            numbers[nums[i]]++;
        }
        int result =0;
        for(auto const &x : numbers) {
            if(k==0) {
                if(x.second>1) result++;
            }
            else{
                if(numbers[x.first-k]) result++;
            }
        }
        return result;
    }
};
