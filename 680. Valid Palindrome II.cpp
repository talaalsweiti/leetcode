class Solution {
public:
    bool isPalindrome(int left,int right,string s){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.size()-1;
        while(left<right) {
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                if(isPalindrome(left+1,right,s) || isPalindrome(left,right-1,s)) return true;
                return false;
            }
            
        }
        return true;
    }
};
