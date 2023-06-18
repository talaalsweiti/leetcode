class Solution {
public:
    map<int,int>memo;
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        if(!memo[n])
        memo[n]=climbStairs(n-1) + climbStairs(n-2);
        return  memo[n];
    }
};