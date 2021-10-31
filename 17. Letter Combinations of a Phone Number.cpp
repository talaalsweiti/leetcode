class Solution {
public:
    void helper(string current, string str , map<int,string> mp , int index,vector<string> &result) {
        if(index==str.size()) {
            result.push_back(current);
            return;
        }
        string temp = mp[str[index]-'0'];
        for(int i=0;i<temp.size();i++) {
            helper(current+temp[i],str,mp,index+1,result);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(!digits.size()) return result;
        map<int,string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        helper("",digits,mp,0,result);
        return result;
    }
};
