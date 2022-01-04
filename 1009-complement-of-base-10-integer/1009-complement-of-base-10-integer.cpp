class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n) return 1;
        int digits = log(n)/log(2) +1;
        int comp = pow(2,digits)-1;
        return comp^n;
    }
};