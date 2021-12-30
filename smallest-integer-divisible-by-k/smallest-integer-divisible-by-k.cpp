class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0) return -1;
        int cnt = 0;
        long long int num = 1;
        while( num%k && cnt<=k){
            num*=10;
            num++;
            num%=k;
            cnt++;
        }
        return num%k ? -1 : cnt+1;
    }
};

/*
    1 -> 1
    3 -> 3
    7 -> 6
    9-> 9
    11 -> 2
    13 ->6
    17 ->16
    19 -> 18
    21 -> 6
    23- > 22
    27 -> 27
    31 -> 15
*/