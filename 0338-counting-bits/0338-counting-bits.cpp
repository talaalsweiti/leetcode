class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int cnt =0;
        //we check each bit and perform AND operation to check if it's 1 or not 
            for(long j=0;j<=(int)log2(i)+1;j++){
                if(((1 << j ) &i)){
                  cnt++;
                }
            }
             ans.push_back(cnt);
           
        }
        
        return ans;
    }
};