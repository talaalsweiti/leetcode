class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        map<int,int> numbers;
        for(int num:nums){
            numbers[num]++;
        }
        for(int num:nums){
            if(numbers[num]==1&&!numbers[num-1]&&!numbers[num+1]){
                ans.push_back(num);
            }
        }
        return ans;
    }
};