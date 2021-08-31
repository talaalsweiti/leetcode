class Solution {
public:
    int countLetters(string s) {
        int ans = 1 , count = 1;
        for(int i=1;i<s.size();i++) {
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                count=1;
            }
             ans+=count;
        }
        return ans;
    }
};
