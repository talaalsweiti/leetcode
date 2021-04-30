class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int n = queries.size();
        int cnt = 0;
        for(int j=0;j<A.size();j++) {
           if(A[j]%2==0) cnt+=A[j];
        }
        vector<int> ans(n,cnt);
        for(int i=0;i<queries.size();i++) {
            int temp =  A[queries[i][1]]; 
            if(A[queries[i][1]]%2==0) {
                cnt-=temp;
            }
             A[queries[i][1]]+=queries[i][0];
             if(A[queries[i][1]]%2==0) {
                cnt+=A[queries[i][1]];
               
            }
             ans[i] = cnt ;
           
        }
        return ans;
    }
};
