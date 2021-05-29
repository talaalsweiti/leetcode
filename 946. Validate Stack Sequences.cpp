class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j =0;
        stack<int> nums;
        for(int i=0;i<pushed.size();i++) {
            nums.push(pushed[i]);
            while(!nums.empty()&&nums.top()==popped[j]){
                nums.pop();
                j++;
            }
            
        }
        return nums.empty();
    }
};
