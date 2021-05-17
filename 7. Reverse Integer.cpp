class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        ::reverse(str.begin(), str.end()); 
        long long num ; 
          stringstream ss;  
         ss << str;  
      ss >> num;   
        if(x<0)
            num*=-1;
        if(num >= (pow(2,31)-1) || num <= -1*pow(2,31))
            return 0;
        return (int)num ;
    }
};
