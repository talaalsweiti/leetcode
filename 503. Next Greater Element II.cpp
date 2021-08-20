class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> indices;
        int n = nums.size();
        vector<int> result(n,-1);
        for(int i=0;i<n*2;i++) {
            while(!indices.empty() && nums[indices.top()] < nums[i % n]) {
                result[indices.top()] =nums[i % n];
                indices.pop();
            }
            if(i<n) indices.push(i);
        }
        return result;
    }
};
