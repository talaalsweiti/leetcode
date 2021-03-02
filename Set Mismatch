class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> res;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
          mp[nums[i]]++;
        }
        bool flg = false;
        int j = -1 ;
        for(int i=1;i<=n;i++) {
            if(mp[i]==2){
                res.push_back(i);
                flg=true;
             }
              if(mp[i]==0){
              j=i;
              }
           if(flg&&j!=-1){
               break;
           }
          }
    
             res.push_back(j);
            
           
          
    return res;
    }
};
