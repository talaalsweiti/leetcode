class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        bool flg = false;
        vector<int> ans ;
        for(int i=0;i<arr.size();i++) {
            for(int j=0;j<pieces.size();j++){ 
                 if(pieces[j][0]==arr[i]) {
                      for(int k=0;k<pieces[j].size();k++)
                      ans.push_back(pieces[j][k]);  
                 } 
            }
         
        }
     
            if(ans==arr)
            {
                flg = true;
          
            }
    return flg;
    }
};
