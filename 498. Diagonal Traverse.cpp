class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> diagonal;
        int c,r;
        bool flg  = 0;
        
     for(int k=0 , col =0;k<matrix.size() &&col < matrix[0].size() ;) {
             r = k;
             c=col;
             vector<int> temp;
             while(r>=0 && c < matrix[0].size()){
               // cout << matrix[r][c] << " ";        
                 temp.push_back(matrix[r][c]);
                 r--;
                 c++;
             }
        // cout <<endl;
            if(!flg) for(int i=0 ; i<temp.size() ;i++) diagonal.push_back(temp[i]);
            else  for(int i=temp.size()-1 ; i>=0 ;i--) diagonal.push_back(temp[i]);
             flg=!flg;  
           if(k != matrix.size()-1) k ++ ;
            else col ++ ; 
         }       
        return diagonal;

    }
};
