class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt =0 , Rcnt =0 , Lcnt =0;
        for(int i=0 ;i<s.length();i++) {
            if(s[i]=='R'){
                Rcnt++; 
            }     
            else {
                Lcnt++;
            }   
          if(Rcnt==Lcnt){
           Rcnt =0 , Lcnt =0;
            cnt++;
      }
              
        }
        return cnt ;
    }
};
