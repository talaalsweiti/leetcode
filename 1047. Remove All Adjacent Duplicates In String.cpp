class Solution {
public:
    
    string removeDuplicates(string S) {
     bool flg = true;
        string temp = S;
        for(int i=0;i<temp.length()-1;) {
            int j = i +1;
            if(S[i]==S[j]) {
                S.erase(i, 2);
                if(i>0)
                i = i-1;
                else
                 i=0;
               
            }
            else {
                i++;
            }
        
        }

    return    S;
        
    }
};
