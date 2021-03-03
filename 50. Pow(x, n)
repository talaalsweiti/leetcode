class Solution {
public:
    double myPow(double x, int n) {
        if(n<0 && n!=-1*pow(2,31))
        {
            double y = 1.0/x; 
            n*=-1;
            x = y;
        }
        if(n==0)
            return 1.0;
        if(n==1)
            return x;

        double ans = myPow(x, n/2);
        ans*=ans;
        //if the power is odd , multiply the result and the number
        if(n%2==1)
        return (ans*x);
        //if its even , dont multiply it with the number
        return ans;
    }
};
