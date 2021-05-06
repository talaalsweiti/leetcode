class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> remainder;
        for(int i=0;i<arr2.size();i++) {
           // ans.push_back(arr2[i]);
            for(int j =0 ;j<arr1.size();j++) {
             if(arr1[j]==arr2[i]){
                ans.push_back(arr1[j]);
            }
                
            }      
        }
        for(int i=0;i<arr1.size();i++) 
        {
          // cout << count(((ans).begin()), ((ans).end()), arr1[i]) << endl;
            if(count(((ans).begin()), ((ans).end()), arr1[i]) == 0){
                remainder.push_back(arr1[i]);
            }
        }
        sort(((remainder).begin()), ((remainder).end())); 
        ans.insert(ans.end(), remainder.begin(), remainder.end());
        return ans;
        
    }
};
