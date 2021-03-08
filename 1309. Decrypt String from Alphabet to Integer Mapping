class Solution {
public:
    string freqAlphabets(string s) {
        map<int,char> first;
        int k=1;
        for(char i='a';i<='i';i++) {
            first[k] =  i;
     
            k++;
        }
        map<int,char> sec;
         int b=10;
        for(char i='j';i<='z';i++) {
            sec[b] = i ;
      
            b++;
        }

        string ans = "";
        for(int i=0;i<s.length();) {
            if(i==s.length()-1 && s[i] != '#') {
                int m = s[i] - '0';
                ans+= first[m];
                break;
            }
           else if(s[i+2]!='#' && s[i]!='#' ){
                int m = s[i] - '0';
                ans+= first[m];
                i++;
            }
            else{
                string temp = "";
                temp+=s[i];
                temp+=s[i+1];
                stringstream to_int(temp); 
                int x = 0; 
                to_int >> x; 
                ans+= sec[x];
                i+=3;
            }
            
        }
        
        
        
        return ans;
        
    }
};
