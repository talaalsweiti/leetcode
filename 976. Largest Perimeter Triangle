class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.rbegin(),A.rend());
        int p=0;
      
        for(int i=0;i<A.size()-2;i++) {
            int a = A[i];
            int b = A[i+1];
            int c = A[i+2];
           if( (a+b > c) &&(a+c > b) && (b+c >a))
           {
               p = a+b+c;
               break;
           }
            
        }
        
        return p;
    }
};
