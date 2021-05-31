class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = nums1;
        stack<int>st;
        map<int,int>mp;
        for(int i=nums2.size()-1;i>-1;i--){
            while(!st.empty()&&st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty())mp[nums2[i]] = -1;
            else mp[nums2[i]] = st.top();
            st.push(nums2[i]);  
        }
        
        for(int i=0;i<result.size();i++){
            result[i] = mp[result[i]];
        }
        return result;
    }
};
