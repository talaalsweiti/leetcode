class Solution {
public:
    bool isSubsequence(string s, string t) {
        string temp = "";
        int j=0;
        for(int i=0;i<t.length();i++){
                if(s[j]==t[i]) {
                    temp+=s[j];
                    j++;
            }
        }

        
return (temp==s) ;    
    }
};
