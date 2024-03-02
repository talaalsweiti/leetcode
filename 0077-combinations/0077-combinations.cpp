class Solution {
public:
     vector<vector<int>>ans;
    void backtracking(int start,int k,vector<int>nums,int n){
        if(k==nums.size())  {
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<=n;i++){
            nums.push_back(i);
            backtracking(i+1,k,nums,n);
            nums.pop_back();
        }
     
    }
    vector<vector<int>> combine(int n, int k) {
       
        // for(int i=1;i<=n;i++){
        backtracking(1,k,{},n);
        
        return ans;
    }
};