class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> cnt ;
        int ans = -1;
       for(int i=0;i<arr.size();i++) {
            cnt[arr[i]]++;
          
        }
        for(int i=0;i<arr.size();i++) {
         if(arr[i]==cnt[arr[i]])
            {
                if(ans<arr[i])
                 ans = arr[i];
                
            }
        }
        return ans;
    }
};
