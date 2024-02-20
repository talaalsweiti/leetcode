class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<strs.size()-1;j++){
                if(i>=strs[j].size()) return ans;
                if(strs[j][i]!=strs[j+1][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};