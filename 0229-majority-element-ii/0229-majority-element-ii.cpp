class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int,int> cnt;
        for(int num:nums) cnt[num]++;
        for(auto &x:cnt){
            if(x.second>n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

/*

[3,3,3,2]


*/