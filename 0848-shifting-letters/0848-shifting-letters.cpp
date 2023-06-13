class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum = 0;
        map<char,int> chars;
        int a = 'a';
        vector<char> c_chars;
        for(int i=0;i<26;i++) {
            chars[a]=i;
            c_chars.push_back(a);
            a++;
        }
        for(int i=s.size()-1;i>=0;i--){
            sum+=shifts[i];
            s[i] =  c_chars[(chars[s[i]] + sum)%26];
        }
        return s;
    }
};