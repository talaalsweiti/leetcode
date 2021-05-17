class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2!=0) {
        double med = (double)nums1.size()/2.0;
        return nums1[med];
        }
         int medelemnts = nums1.size()/2;
        int sum = nums1[medelemnts] +  nums1[medelemnts-1];
        double med = sum/2.0;
        return med;
        
        }
};
