class Solution {
public:
    int maximum69Number (int num) {
        int temp = num , cnt =0 ;
        string str=  to_string(num); ;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='6'){
             int k = str.size() - i;
               if(k==4) num+=3000;
               if(k==3) num+=300;
               if(k==2) num+=30;
               if(k==1) num+=3; 
        break;
            }
        }
        return num;
     
    }
};


//another sol.

class Solution {
public:
    int maximum69Number (int num) {
        int size =  to_string(num).length();  
        for(int i=size-1;i>-1;i--) {
          int digit = (num/(int)pow(10,i))%10;   
            if(digit==6){
            num+=(3*pow(10,i));
            break;
            }
        }
        return num;
     
    }
};
