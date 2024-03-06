class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(string word : words){
            string temp = "";
            for(int i=0;i<word.size();i++){
                if(word[i]!=separator){
                    temp+=word[i];
                }else{
                    if(temp.size())
                    ans.push_back(temp);
                    temp = "";
                }
            }
              if(temp.size()){
                     ans.push_back(temp);
                }
        }
        
        return ans;
    }
};