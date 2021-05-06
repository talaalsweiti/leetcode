class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        bool flg = 0 ;
        for(int i=0;i<words.size();i++) {
            flg =0;
               for(int j=0;j<words[i].length();j++){
                   flg = 0;
                   for(int k=0;k<allowed.length();k++) {
                        if(words[i][j] == allowed[k]) {
                            flg =1;
                        }
                   }
                if(!flg){
                    cnt++;
                    break;
                }
            }
        }
    return words.size()-cnt;
    }
};
