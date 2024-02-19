class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n<=0) return false;
         //(int)log2(n)+1 represnts the number of bits needed for n
        int bits = (int)log2(n)+1;
        return pow(2,bits-1)==n;
    }
};

/*

1 2 4 8 16 
01
10
100
1000
10000



*/