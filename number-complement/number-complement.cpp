class Solution {
public:
    int findComplement(int num) {
        int bits = log(num)/log(2)+1;
        int ones = pow(2,bits)-1;
        return ones^num;           
    }
};

/*

1
1*10 + 1
11

11*10 + 1
110=11
*/