class Solution {
public:
    int bulbSwitch(int n) {
        int sum =0;
        for(int i=0;i<=n;i++) {
            sum+=(2*i+1);
            if(sum>n) return i;
        }
        
        return -1; 
    }
};
/*

0 => ans = 0 for the first numebr {0}

1
1 => ans = 1 for the next 3 numbers {1,2,3}
1

2
2
2 =>  ans = 2 for the next 5 numbers {4,5,6,7,8}
2
2

3
3
3
3 =>  ans = 3 for the next 7 numbers {9,10,11,12,13,14,15}
3
3
3

4
4
4
4
4
4 =>  ans = 4 for the next 9 numbers
4
4
4
 
5
5
5
5
5
5
5
5 =>  ans = 5 for the next 11 numbers
5
5
5
 
*/
