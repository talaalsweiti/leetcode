class Solution {
public:
    int arrangeCoins(int n) {
        long long sum = 0;
        int i =2;
        sum+=i;
        while(sum<n) {    
            i++;
            sum+=i;
        }
  
        return i-1;
    }
};
