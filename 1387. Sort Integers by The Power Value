class Solution {
public:
  typedef pair<int,int> pair;
    int getKth(int lo, int hi, int k) {
        map<int,int> mp;
       for(int i = lo ; i <= hi ; i++) {
           int temp = i ;
           int cnt =0 ;
           while(temp!=1) {
               if(temp%2==0)
                   temp/=2;
               else
                   temp=3*temp + 1;
               cnt++;
           } 
           mp[i] = cnt ;
           
       }
     vector<pair> vec; 
     copy(mp.begin(), mp.end(),back_inserter<vector<pair>>(vec));
    sort(vec.begin(), vec.end(),
            [](const pair& l, const pair& r) {
                if (l.second != r.second)
                    return l.second < r.second;
 
                return l.first < r.first;
            });
      
        int cnt = 1;
    for (auto const &pair: vec) {
        if(cnt==k)
            return pair.first;
    cnt++;
    }
 
        
        return 0;
    }
};
