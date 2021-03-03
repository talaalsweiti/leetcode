class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {

        set<int> diff;
        for(int i=0;i<deck.size();i++) {
            int cnt = count(deck.begin(),deck.end() , deck[i]);
            if(cnt<2)
                return false;
           diff.insert(cnt); 
        }
        if(diff.size()==1)
            return true;
        bool flg = true;
        int min = *diff.begin(); 
        for(int i=2;i<=min;i++) {
            flg = true;
            for (auto x : diff) {
               if(x%i!=0) {
                   flg = false;
                   break;
               } 
            }
         if(flg)
        return true;
  
                    
        }
        
        return flg;
    }
};
