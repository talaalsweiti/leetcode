class Solution {
public:
    bool hasAlternatingBits(int n) {
        int size = log(n) / log(2) + 1;
        for(int i=0;i<size-1;i++){
            int j=i+1;
            int num1  = (n>>i &1);
            int num2 = (n>>j &1);
            if(num1 ^ num2 == 0) return false;
        }
        return true;
    }
};
