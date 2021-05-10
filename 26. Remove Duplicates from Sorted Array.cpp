class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    // return iterator to last element of unique sorted array.
	nums.resize(unique( nums.begin(),nums.end() ) - nums.begin());
        return nums.size();
    }
};
