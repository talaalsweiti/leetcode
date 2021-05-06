class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr[1000]={0};
        vector<int> result;
            for(int i=0;i<nums2.size();i++) {
                arr[nums2[i]]++;
            }
            for(int i=0;i<nums1.size();i++) {
                if(arr[nums1[i]]>0){
                    arr[nums1[i]]--;
                    result.push_back(nums1[i]);
                }
            }
        return result;
       
    }
};
