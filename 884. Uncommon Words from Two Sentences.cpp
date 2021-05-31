class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> result;
        map<string,int> mapS1;
        string temp = "";
        //store the every word in a map with it's occurence in the two sentences
        for(int i=0;i<s1.size();i++) {
            if(s1[i]==' ') {
                mapS1[temp]++;
                temp="";
                continue;
            }
              temp+=s1[i];
        }
        mapS1[temp]++;
        temp = "";
        for(int i=0;i<s2.size();i++) {
            if(s2[i]==' ') {
                mapS1[temp]++;
                temp="";
                continue;
            }     
            temp+=s2[i];
        }
        mapS1[temp]++;
        for(auto const &x: mapS1) {
            if(x.second==1) result.push_back(x.first);
        }
      
        return result;
    }
};
