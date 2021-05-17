class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result ;
        for(;left<=right;left++) {
            if(left%10==0){
                continue;
            }
            int temp = left ;
            bool flg = true;
            while(temp!=0) {
                int digit = temp%10;
                if(digit == 0 || left%digit!=0) {
                    flg = false;
                break;
                }
                temp/=10;
            }
            if(flg)
                result.push_back(left);
        }
        return result;
    }
};
