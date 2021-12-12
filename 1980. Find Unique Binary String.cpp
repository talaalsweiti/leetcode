class Solution {
public:
    void helper(map<string,int>& mp,string cur,string& ans,int index,int size){
        if(cur.size()==size){
            if(mp.find(cur)==mp.end()) {
                ans=cur;
            }
            return;
        }
       helper(mp,cur+"1",ans,index+1,size); 
       helper(mp,cur+"0",ans,index+1,size);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<string ,int> mp;
        string ans = "";
        int size = nums[0].size();
        for(string s: nums){
            mp[s] =1;
        }
        helper(mp,"",ans,0,size);
        return ans;
    }
};
