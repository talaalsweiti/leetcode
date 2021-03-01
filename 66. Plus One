class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
          if(digits[digits.size()-1]!=9) {
              digits[digits.size()-1]++;
              return digits ;
              
          }
        vector <int> ans = digits;
        int i=digits.size()-1;
           while(digits[i]==9 && i>0) {
               ans[i] = 0;
               i--;
           }  
          if(i==0 &&digits[0]==9){
              fill(ans.begin(),ans.end(),0); 
              ans.insert(ans.begin(),1);
            return ans;
          } 
        
        ans[i]++;
    
        return ans;
    }
};
