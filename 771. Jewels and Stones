class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int small[26] = {0};
         int capital[26] = {0};
        int cnt =0;
        for(int i=0;i<jewels.size();i++) {
            if(jewels[i]>='a')
            small[jewels[i]-'a']++;
            else
            capital[jewels[i]-'A']++;
        }
        for(int i=0;i<stones.size();i++) {
           if(stones[i]>='a'){
            if(small[stones[i]-'a']>0){
                cnt++;
            } 
           }
            else
            if(capital[stones[i]-'A']>0) {
                cnt++;
        }
        }
    return cnt;
    }
};
