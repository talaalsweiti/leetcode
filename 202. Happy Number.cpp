class Solution {
public:
    bool isHappy(int n) {
       int sum = 0;
       bool flg = false ;
       if(n==1){
           flg = true;
         }
        
       else {
        while(n>0) {
            sum +=((n%10)*(n%10));  
            n/=10;
            if(sum<10&&n==0 && sum!=7){
                 break;
              }
            
             if(n==0){
                n=sum;
                sum =0;
            }
            
            if(n==1&&sum==0){
                flg = true;
                break;
            } 
             
        }
        }
        return flg;
        
    }
};
