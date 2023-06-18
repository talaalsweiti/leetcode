class Solution {
public:
    int mySqrt(int x) {
        // /if(x==1 || x==0) return x;
        long low = 1 , high = x;
        int ans=0;
        while(low<=high) {
            long long mid = low + (high-low)/2;
            if(mid*mid==x){
                ans = mid;
                break;
            } else if(mid*mid > x){
                high = mid-1;
            }else{
                low = mid+1;
                ans=mid;

            }
        }
        return ans;
    }
};




/*

1 2 3 4 5 6 7 8 9 10 11 12 13  14  15 16 17 
1 1 1 2 2 2 2 2 3 3   3 3   3   3   3  4  4


x=14 , mid=
*/