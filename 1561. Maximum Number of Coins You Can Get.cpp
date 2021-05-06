class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int sum = 0;
        int x = piles.size()/3;
        for(int i=0;i<piles.size()-x;){
             sum+=piles[i+1];
            i+=2;
        }
        return sum ;
    }
};
