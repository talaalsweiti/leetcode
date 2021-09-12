class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        unordered_map<char,int> mp;
        int left = 0 , maxLength =0 ;
        
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
            while(mp.size()>k && left<s.size()) {
                mp[s[left]]--;
                if(!mp[s[left]]){
                    mp.erase(s[left]);
                }
                left++;
            }
            maxLength = max(maxLength,i-left+1);
            
        }
        
        return maxLength ;
    }
};

/*
eceba

aaabgaaa

*/
