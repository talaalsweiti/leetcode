class Solution {
public:
    int myAtoi(string s) {
        int index =0;
        long long num = 0;
        bool isNeg = false;
        if(!isdigit(s[index]) && s[index]!='-' && s[index]!=' ' && s[index]!='+' )return 0;
        while(index<s.size() && s[index]==' '){
            index++;
        }
        if(index<s.size()&&s[index]=='-') {
            isNeg =true;
            index++;
        }else if(index<s.size()&&s[index]=='+') {
            
            index++;
        }
       
        while(index<s.size() && isdigit(s[index])){
            if ((num > INT_MAX / 10) || (num == INT_MAX / 10 && s[index]-'0' > INT_MAX % 10)) { 
                // If integer overflowed return 2^31-1, otherwise if underflowed return -2^31.    
                return !isNeg ? INT_MAX : INT_MIN;
            }
            num=(num*10) + (s[index]-'0');            
            index++;
        }
        if(isNeg)num*=-1;
        return num;
    }
};

/*
123

1
1*10 + 2

12


12*10 + 3

*/