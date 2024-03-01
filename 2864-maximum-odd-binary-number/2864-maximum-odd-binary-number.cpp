class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones =0;
        string ans = "";
        for(char c:s){
            if(c=='1'){
                ones++;
            }
            
        }
        int size = s.size()-ones;
        ones-=1;
        while(ones--){
            ans+='1';
        }
        
        while(size--){
             ans+='0';
        }
         ans+='1';
        return ans;
    }
};