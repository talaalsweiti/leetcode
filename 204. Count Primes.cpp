//using sieve 

class Solution {
public:
    bool notprime[5000001] = {false};
    int sieve(int n)
    {
        int result = n;
         //true => not prime , false => is prime
        notprime[0] = true;
        notprime[1] = true;
        for(int i=0;i<n;i++) {
            if(notprime[i]) result--;
            else {
                //if a number is prime , it's multiples are not 
                for(int k=i+i;k<=n;k+=i){
                    notprime[k]=true;
                }
            }
        }
        return result;
    }
    
    int countPrimes(int n) {
       return sieve(n); 
    }
};
