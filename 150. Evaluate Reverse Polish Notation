class Solution {
public:
    int evalRPN(vector<string>& tokens) {
          stack<int> stk; 
        for(int i=0;i<tokens.size();i++) {
                int result ;
                if(tokens[i]=="+"){
                     result= stk.top();
                    stk.pop();
                     result+=stk.top();
                     stk.pop();
                    stk.push(result);
                }
                else if(tokens[i]=="-"){
                     result = stk.top()*-1;
                     stk.pop();
                     result+=stk.top();
                     stk.pop();
                    stk.push(result);

                }
                else if(tokens[i]=="/"){
                    int temp ;
                     temp = stk.top();
                     stk.pop();
                     result = stk.top();
                     stk.pop();
                    result/=temp;
                    stk.push(result);

                }
                   else if(tokens[i]=="*"){
                      result = stk.top();
                     stk.pop();
                     result*=stk.top();
                     stk.pop(); 
                       
                    stk.push(result);

                }
            else{
                 stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};
