class Solution {
public:
     
    vector<int> evenOddBit(int n) {
        vector<int>ans(2,0);
        //(int)log2(n)+1 represnts the number of bits needed for n
        //we check each bit and perform AND operation to check if it's 1 or not 
        for(long i=0;i<=(int)log2(n)+1;i++){
            if(((1 << i ) &n)){
                if(i%2) ans[1]++;
                else ans[0]++;
            }
        }
        return ans;
    }
};