class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans =0;
        for(string str: sentences){
            int cnt = 1;
            for(char c : str) {
                if(c==' ')cnt++;
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};