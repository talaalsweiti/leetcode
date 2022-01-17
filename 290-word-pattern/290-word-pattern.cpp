class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string,string> mp;
        string word = "";
        vector<string> words;
        for(int i=0;i<s.size();i++) {
            if(s[i]!=' '){
                word+=s[i];
            }
           if(s[i]==' ' || i ==s.size()-1){
                words.push_back(word);
                word="";
            }
        }
        if(words.size()!=pattern.size()) return false;
        int index=0;
        for(int i=0;i<pattern.size();i++) {
            string temp =   to_string(pattern[i]) ;
            if(mp.find(temp)==mp.end()&&mp.find(words[i])==mp.end()){
                mp[temp] = words[i];
                mp[ words[i]] =temp;
               
            }else{
                if(mp[temp]!=words[i] || mp[words[i]]!=temp){
                    return false;
                }
            }
        }
        return true;
    }
};