class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> Schars;
        stack <char> Tchars;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&&!Schars.empty()) {
                Schars.pop();
            }
             else if(s[i]!='#'){
                Schars.push(s[i]);
            }
        }
         for(int i=0;i<t.size();i++){
        if(t[i]=='#'&&!Tchars.empty()) {
                Tchars.pop();
            }
             else if(t[i]!='#'){
                Tchars.push(t[i]);
            }
        }
        
        while(!Tchars.empty()&&!Schars.empty()) {
            if(Tchars.top()!=Schars.top())
                return false;
            Tchars.pop();
            Schars.pop();
        }
        if(!Tchars.empty()||!Schars.empty()) return false;
        return true;
        
    }
};
