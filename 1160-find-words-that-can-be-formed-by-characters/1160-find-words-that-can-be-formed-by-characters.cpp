class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> cnt(26,0);
        for(char c:chars){
            cnt[c-'a']++;
        }
        int ans = 0;
        for(int i=0;i<words.size();i++){
            vector<int> temp = cnt;
            bool flg = true;
            for(char c:words[i]){
                if(temp[c-'a']<=0){
                    flg= false;
                    break;
                }
                temp[c-'a']--;
            }
            if(flg){
              ans+=words[i].size();  
            }
        }
        return ans;
    }
};