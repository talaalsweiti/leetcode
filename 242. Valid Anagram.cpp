class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

/////////////////////////
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> occurencesSTR1 ;
        map<char,int> occurencesSTR2 ;
        for(int i=0;i<s.length();i++) occurencesSTR1[s[i]]++;
        for(int i=0;i<t.length();i++)
        {
            occurencesSTR2[t[i]]++;
            if(occurencesSTR1[t[i]]==0) return false;
        }
        for(char a='a';a<='z';a++){
            if(occurencesSTR1[a]!=occurencesSTR2[a]) return false;
        }
        return true;
    }
};
