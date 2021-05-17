class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int window = 0 ;
        int max = -1e9;
        vector<int> sum;
        for(int i=0;i<nums.size();i++) {
            int l =0;
            int r = window ;
            int temp =0;  
            while(l<=window) {
                temp+=nums[l];
                l++;
            }    
            l=0;
            if(temp>max) max =temp;
            for(int j=window+1;j<nums.size();j++) {
                temp-=nums[l];
                temp+=nums[j];
                if(temp>max) max=temp;
                l++;
            }
            window++;
        }
	
            return max;
    }
};

//secind solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum = -1e9;
        int best = -1e9;
	//for each poisition calculate the maximum sum of a subarry that ends at that poisition
        for(int k=0;k<nums.size();k++) {
                sum = max(nums[k],sum+nums[k]);
                 best = max(best,sum);
        }
            return best;
    }
};
