class Solution {
public:
    bool isUgly(int num) {
        bool flg = true;
        for(int i=2;i<=pow(num,0.5);i++) {
            while(num%i==0) {
                num/=i;
                if(i!=2 && i!=3 && i!=5 ){
                    flg = false;
                    break;   
                }
            }      
        }
    
         if(num!=1 && num!= 2&&num!=3&&num!=5){
                 flg = false;
        }   
 
        return flg;
    }
};
