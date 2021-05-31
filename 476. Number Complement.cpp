class Solution {
public:
    int findComplement(int num) {
        int numberOfDigits = (log(num) / log(2))+1;
        int allOnes = pow(2,numberOfDigits)-1;
        int result = num ^ allOnes ;
        return result;
    }
};
