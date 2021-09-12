class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int left =0 , length =0 ;
        unordered_map<char,int> mp;
        for(int right=0;right<s.size();right++) {
            mp[s[right]]++;
            while(mp.size()>2 && left<s.size()) {
                mp[s[left]]--;
                if(!mp[s[left]]){
                    mp.erase(s[left]);
                }
                left++;
            }
            length = max(length,right-left+1);
        }
        return length;
    }
};
