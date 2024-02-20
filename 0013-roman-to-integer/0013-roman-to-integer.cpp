class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
    
        int sum =0;
        int i =0;
        while(i<s.size()){
            if( (i <= s.size()-1) && (mp[s[i]] >= mp[s[i+1]])){
                sum+= mp[s[i]];
              
                i++;
            } else{
               sum+=(mp[s[i+1]] - mp[s[i]]); 
               i+=2; 
            }
        }
        return sum;        
    }
};

/*
"CMXCIV"
mp[M] = 1000 
mp[C] = 100

1000 
+
900
+
90


*/