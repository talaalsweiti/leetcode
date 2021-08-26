class Solution {
public:
    int minAddToMakeValid(string s) {
        int start =0 , end = 0;
        for(char c : s) {
            if(c=='(') start++;
            else{
                if(start) {
                    start--;
                }
                else end++;
            }
        }
        return end+start;
    }
};
