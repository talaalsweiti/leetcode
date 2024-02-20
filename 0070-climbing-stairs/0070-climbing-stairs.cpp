class Solution {
public:
    map<int,int> sum;
    int climbStairs(int n) {
        sum[1] = 1;
        sum[2] = 2;
        if(sum[n]) return sum[n];
        sum[n] = climbStairs(n-1) + climbStairs(n-2);
        return  sum[n] ; 
    }
};

/*


1 - 1
2 - 2
3 - 3
4 - 5 + 1
5 - 8 + 3
6 - 13 + 7
7 - 21 + 14
8 - 34 + 26
9 - 55
10 - 89


*/