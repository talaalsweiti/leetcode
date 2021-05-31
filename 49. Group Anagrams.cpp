class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> result;
       map<string,vector<string>> sortedStr;
        
       for(int i=0;i<strs.size();i++) {
           string temp = strs[i];
           sort(temp.begin(),temp.end());
           sortedStr[temp].push_back(strs[i]);
           
       }
       for(const auto &x : sortedStr){
           result.push_back(x.second);
       } 
    return result;         
          
    }
     
};
