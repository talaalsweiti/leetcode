class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char prev ='+';
        s+='+';
        int n;
        int num =0;
        for(char op : s) {
            if(op>='0'&&op<='9') {
                 n = op - '0';
                num = 10 *num + n;
            }
            else{
                if(op==' ') continue;
                if(prev=='+') 
                    st.push(num);
                else if(prev=='-')
                    st.push(-num);
                
                else if(prev=='*'){
                    int top = st.top();
                    st.pop();
                    st.push(top*num);
                }
                else {
                    int top = st.top();
                    st.pop();
                    if(num!=0)
                    st.push(top/num);
                }
                prev = op;
                num =0;
                
            }

        }
        int ans =0;
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};