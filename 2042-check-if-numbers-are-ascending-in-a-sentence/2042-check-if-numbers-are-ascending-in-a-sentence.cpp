class Solution {
public:
    bool areNumbersAscending(string s) {
        int previous = -1;
        int num=0;
        int index=0;
        while(index<s.size()) {
            if(isdigit(s[index])){
                while(index<s.size()&&isdigit(s[index])){
                    num=num*10+(s[index]-'0');
                    index++;
                }
                if(previous>=num) return false;
                previous=num;
                num=0;
            }else{
                index++;
            }
           
        }
        return true;
    }
};