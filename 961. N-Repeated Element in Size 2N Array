class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n = A.size()/2;
        for(int i=0;i<A.size();i++) {
            if(count(A.begin(),A.end(),A[i])==n)
            {
                return A[i];
            }
        }
        return 0;
    }
};
