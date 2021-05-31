class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex = 0 , lee= 0;
        int i =0;
        int n = piles.size()-1;
        int x = 0;
        while(i<n) {
           //alex turn
            if(x%2==0) {
                int maximum = max(piles[i],piles[n]);
                alex+=maximum;
                if(piles[i]>piles[n]) i++;
                else n--;
            }
            else {
                int minimum = min(piles[i],piles[n]);
                lee+=minimum;
                if(piles[i]<piles[n]) i++;
                else n--;
            }
            x++;
        }
        return alex>lee;
    }
};
