class Solution {
public:
    int findDivisors (int n,int& sum){
        int cntDivisors  =0 ;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(n/i==i){
                    cntDivisors++;
                    sum+=i;
                    
                }
               else{
                    cntDivisors+=2;
                    sum+=i;
                    sum+=n/i;
               }
            }
        }
        return cntDivisors ;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans =0 ; 
        for(int i=0;i<nums.size();i++){
            int sum =0;
            if(findDivisors(nums[i],sum)==4){
                ans+=sum;
            }
        }
        
        return ans;
    }
};