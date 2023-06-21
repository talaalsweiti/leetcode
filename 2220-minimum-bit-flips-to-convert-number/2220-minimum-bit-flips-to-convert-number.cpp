class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start==goal) return 0;
        int ans =0 ;
        int x = start^goal;
        for(int i=0;i<=(int)log2(x);i++) {
            if((x & (1 << i))) ans++;
        }
        return ans;
        
    }
};