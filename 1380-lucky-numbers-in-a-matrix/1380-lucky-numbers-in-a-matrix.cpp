class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int ans = INT_MAX, col=0;
        vector<int> anss;
        
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<ans){
                    ans=matrix[i][j];
                    col =j;
                }
            }
            bool flg=true;
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][col]>ans){
                    ans=INT_MAX;
                    flg=false;
                }
                
            }
            if(flg){
                anss.push_back(ans);
            }
        }
        return anss;
    }
};

/*
the minimum element in its row and maximum in its column.
*/
