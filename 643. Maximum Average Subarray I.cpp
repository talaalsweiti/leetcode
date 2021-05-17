class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = -1e9;
        int window = k-1 ;
        int l =0;
        double temp =0;  
        while(l<=window) {
            temp+=nums[l];
            l++;
        }    
        if(temp/k > max) max = temp/k;
        l=0;
        for(int j=window+1;j<nums.size();j++) {  
                 temp-=nums[l];    
                 temp+=nums[j];
                  if(temp/k > max) max = temp/k;
                 l++;
            }
	
    return max;
    }
};
