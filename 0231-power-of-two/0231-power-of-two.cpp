class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return !(n&(n-1));
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