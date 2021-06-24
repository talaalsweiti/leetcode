class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int row=0;row<matrix.size();row++) {
    int left = 0 , right = matrix[0].size()-1;
    int mid;
    while(left<=right) {
      mid = (left+right)/2;
      if(matrix[row][mid]==target) {
        return true;  
      }
      else if(matrix[row][mid]>target) {
        right =mid-1;
      }
      else {
        left = mid+1;
      }
      
    }
    
  }
  return false;
  
  
    }
};
