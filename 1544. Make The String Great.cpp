class Solution {
public:
    string makeGood(string s) {
        stack <char> chars;
        for(int i=0;i<s.size();i++) {
            char oppisite =s[i]^32; 
            if(chars.empty()) {
                chars.push(s[i]);
                continue;
            }
            if((chars.top()==oppisite)){ 
                 chars.pop();
            }
                
          else{
                 chars.push(s[i]);
            }   
        }
        string result ="";
         while (!chars.empty()) {
            result=chars.top()+result;
            chars.pop();
          }
        return result;
    }
};
