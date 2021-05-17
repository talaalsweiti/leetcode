class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int global = 0;
        int local =0;
        for(int i=0;i<A.size();i++) {
          if(abs(A[i]-i)>1)
              return false;
        }
    return true;
    }
};
