class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n,0);
        int j =1;
        if(n!=1){
        for(int i=0;i<n-1;i++) {
            ans[i]=j;
            ans[i+1] = -1*j ;
            i++;
            j++;
        }
        }
        return ans;
    }
};
