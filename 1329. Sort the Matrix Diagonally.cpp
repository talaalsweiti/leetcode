class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
      int temp ; 
        for(int i=0;i<mat.size();i++) {
            for(int j=0;j<mat[i].size();j++) {
                int m = i+1;
                     for(int k=j+1;k<mat[i].size() && m<mat.size();k++){
                     if(abs(m-k)== abs(i - j)) 
                        if(mat[m][k]<mat[i][j]) {
                        temp =  mat[i][j]  ;
                        mat[i][j] = mat[m][k];
                        mat[m][k] = temp;
                        }
                     m++;
                  }
            }
        }
        return mat ;
    }
    
};
