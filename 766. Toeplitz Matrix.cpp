class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int row=0;row<matrix.size()-1;row++) {
            for(int cols =0;cols<matrix[0].size()-1;cols++) {
                if(matrix[row+1][cols+1]!=matrix[row][cols]) return false;
                
            }
        }
        return true;
    }
};
