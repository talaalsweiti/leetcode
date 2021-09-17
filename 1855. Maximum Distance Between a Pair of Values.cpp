class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // if(nums1[0]>nums2[0]) return 0;
        int maximum =0;
        for(int i=0;i<nums1.size();i++) {
            int low = i , high = nums2.size();
            
            while(low<high) {
                int mid = low +(high-low)/2;
                if(nums2[mid]>=nums1[i]) {
                     maximum = max(maximum,mid-i);
                     low = mid+1;
                }
                else{
                   high=mid;
                }
            }
            
            
        }
        
        return maximum;
    }
};
