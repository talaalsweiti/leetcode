class Solution {
public:
    int sumBase(int n, int k) {
        int digitsSum=n%k;
        while(n/=k) {
            digitsSum+=n%k;
        }
      
        return digitsSum;
    }
};
