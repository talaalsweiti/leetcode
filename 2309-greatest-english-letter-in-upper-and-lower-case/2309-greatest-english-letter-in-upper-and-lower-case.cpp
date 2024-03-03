class Solution {
public:
    string greatestLetter(string s) {
        map<char,int>mp;
        
        string ans="";
        for(char c: s){
            if((toupper(c)==c && mp[tolower(c)]) || (tolower(c)==c && mp[toupper(c)])){
                if(toupper(c)>ans[0]){
                    ans=toupper(c);
                }
            }
        
            mp[c]++;
        }
    
        return ans;
    }
};