class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        bool flg  =true;
        for(int i=0;i<matrix.size();i++) {
            flg = true;
            int min =1e5+7; 
            int index;
            for(int k=0;k<matrix[i].size();k++) {          
                if( matrix[i][k] < min ){
                    min =  matrix[i][k];
                    index = k;
                }
            }
            for(int j=0;j<matrix.size();j++) {
               if(min < matrix[j][index] && i!=j){
                   flg =false;
                   break;
               }
            }
            if(flg){
                ans.push_back(min);
            }
        }
        return ans;
    }
};
