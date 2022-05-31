class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<string,int> substrings;
        int maxSubstrungs = pow(2,k);
        for(int i=0;i<s.size();i++){
            string currentSubstring = "";
            for(int j=0;j<k&&i+j<s.size();j++){
                currentSubstring+=s[j+i];
            }
            if(currentSubstring.size()==k){
                substrings[currentSubstring]++;
            }
        }
        return substrings.size()==maxSubstrungs;
    }
};

/*
k=2

00110110


*/
