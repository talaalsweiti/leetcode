class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2) return false;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                char top = st.top();
               
                if((top=='(' && s[i] !=')') || (top=='[' && s[i] !=']') || (top=='{' && s[i] !='}')){
                    return false;
                }else{
                     st.pop();
                }
            }
        }
        return st.empty();   
    }
};