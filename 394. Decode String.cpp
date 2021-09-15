class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(char c : s) {
            if(c==']'){
                string result = "";
                while(st.top()!='['){
                    result+=st.top();
                    st.pop();
                }
                st.pop();
                int num  = 0, base = 1;
                while(!st.empty() && isdigit(st.top())) {
                    num =  num +(st.top() - '0' ) *base;
                    st.pop();
                    base*=10;
                }
                
                while(num--) {
                    for(int j=result.size()-1;j>-1;j--){
                        st.push(result[j]);
                    }
                }
            }
            
            else{
                st.push(c);
            }
        }
        
        string ans ;
        while(!st.empty()){
            ans= st.top() + ans;
            st.pop();
        }
        return ans;
     }
};
