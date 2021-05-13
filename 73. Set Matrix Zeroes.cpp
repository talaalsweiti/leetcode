class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> indices;
        for(int row=0;row<matrix.size();row++){
            for(int column=0;column<matrix[0].size();column++) {
                if(matrix[row][column]==0) {
                    indices.push_back({row,column});
                }
            }
        }
        
        for(int i=0;i<indices.size();i++) {
            int row= indices[i].first;
            int column = indices[i].second;
            for(int k=0;k<matrix.size();k++) {
                matrix[k][column]=0;
            }
            for(int k=0;k<matrix[i].size();k++) {
                matrix[row][k]=0;
            }
        
        }
        
    }
};
