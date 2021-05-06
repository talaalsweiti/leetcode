class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0 ;
        int k = mat.size()-1;
        int l = k , r = k;
        int start =0;
        while(k>-1)
        {
         
            sum+=mat[k][r];
             sum+=mat[start][l];    
         
            start++;
            l--;
            k--;
            r--;
            
            
        }
        if(mat.size()%2!=0) {
            int half = mat.size()-1;
            half/=2;
            sum-=mat[half][half];
        }
    return sum ;
    }
};
