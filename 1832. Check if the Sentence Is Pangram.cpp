class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        for(char a='a';a<='z';a++) {
            mp[a]=0;
        }
        for(int i=0;i<sentence.length();i++) {
            mp[sentence[i]]++;
        }
        for(auto const& x: mp) {
            if(x.second == 0) return false;
        }
        return true;
    }
};
