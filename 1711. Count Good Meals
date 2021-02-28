class Solution {
public:
    
    
    
    int countPairs(vector<int>& deliciousness) {
        long cnt =0;       
        int n = deliciousness.size();
        vector<int> powers;
        for(int i=0;i<=21;i++) {
            powers.push_back(pow(2,i));
        }
     map<int, int> mp;               
    for (int i = 0; i < n; i++)
    { 
          for(int j=0;j<=21;j++) {
          int comp = powers[j] -deliciousness[i];
            if(mp[comp]>0){
                cnt+=mp[comp];
          }
         }  
    mp[deliciousness[i]]++;
    }
        
        

     int x = cnt%1000000007;
    return x;
    }
};

