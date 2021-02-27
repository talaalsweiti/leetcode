class Solution {
public:
    int binaryGap(int n) {
       
        vector<string> binary ;
        while(n>0) {
            string temp = to_string(n%2);   
            binary.push_back(temp);
            n/=2;
        }
        reverse( binary.begin() ,binary.end() );
       int max =0 ;
        for(int i=0;i<binary.size()-1;i++){
            if(binary[i]=="1") {
            for(int j=i+1;j<binary.size();j++) {
                if(binary[j]=="1") {
                   if(j-i>max){
                       max=j-i;
                
                    }      
                        break;   
                 }
                }
             }
        }
    return max;
    }
};
