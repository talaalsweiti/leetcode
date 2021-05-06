class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        map<string,int> mp;
        for(int i=0;i<strs.size()-1;i++) {
           string string1 = strs[i];
           string string2= strs[i+1];
             int k =0;
            bool flg=false;
                for(int j=0;j<string1.size();j++) {
                    string sub = ""; 
                    for(;k<string2.size();k++) {
                        if(string1[j]==string2[k])
                        {      
                            sub+=string2[k];
                            mp[sub]++;
                            j++;            
                        }
                        else {
                            flg=true;
                            break;
                        }
                    }
                    if(flg) break;
                }
          
      
        }
        int max = 0;
        int length =0;
        string result;
        for(auto const&x : mp){
            if(x.second>=max&&length<x.first.length()){
                max = x.second;
                result = x.first;
                length =x.first.length();
            }
        }
        if(max==strs.size()-1)
            return result;
        return "";
        
        
    }
};
