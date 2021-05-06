class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(),-1);
        for(int i=0;i<arr.size()-1;i++) {
            int max = arr[i+1];
            for(int j=i+1;j<arr.size();j++) {
                if(arr[j]>max){
                    max = arr[j];
                }
            }
            ans[i] = max;
        }
   return ans;
    }
    
};
