class Solution {
public:
    int minOperations(int n) {
        vector<int> nums(n,0);
        int cnt = 0;
        for(int i=0;i<n;i++) {
            nums[i]=(2*i)+1;
            
        }
        int j = n-1;
        int i = 0;
        while(i<j){  
            int r = nums[j] - n;
            nums[j]-=r;
            nums[i]+=r;
            i++;
            j--;
            cnt+=r;
        } 
    
        return cnt;
        
    }
};
