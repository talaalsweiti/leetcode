class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        int i=0;
        int j=1e6;
        while(A[i]<0&&K!=0) {
               A[i]*=-1; //convert negative numbers to positive ones
               K--;
            if(A[i]==0){ 
                j =i; //if the array contains 0 , save it's index
             }
               i++;
           }
          int vecSum = 0;
        //if k is positive  or if the array contains 0 , the numbers won't be affected
        if(K%2==0 ||K==0 || j!=1e6 ){ 
             vecSum = accumulate(A.begin(),A.end(), 0); 
            return vecSum;
        }
    
          //if k is odd , then only multiply the smallest number with -1
            sort(A.begin(),A.end());
            A[0]*=-1;
             vecSum = accumulate(A.begin(),A.end(), 0); 
            return vecSum;
        
        
      
    }
};


//another sol.

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        int i=0;
        int vecSum=accumulate(A.begin(),A.end(), 0); ;
        while(A[i]<0&&K!=0) {
            A[i]*=-1;
            vecSum+=(2*A[i]);
            i++;
            K--;
           }
        if(K==0 || K%2==0)
            return vecSum;
        sort(A.begin(),A.end());
        A[0]*=-1;
        vecSum+=(2*A[0]);
        return vecSum;
      
    }
};
