class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp_x = x;
        int remainder;
        long reversed_number = 0;
        while(temp_x != 0) {
            remainder = temp_x % 10;
            if( reversed_number * 10  <= INT_MAX ){
                reversed_number = reversed_number * 10 + remainder;
            }else{
                return false;
            }
            
            temp_x /= 10;
        }
  
        return reversed_number==x;
        
    }
};

/*

121




*/