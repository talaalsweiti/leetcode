class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> results(l.size(),false);
        for(int i=0;i<l.size();i++) {
            vector<int> temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            bool flg = true;
            for(int k=0;k<temp.size()-2;k++) {
                if(temp[k+1]-temp[k]!=temp[k+2]-temp[k+1])
                {
                    flg = false;
                    break;
                }
            }
        results[i] = flg;
        }
    return results;
    }
};
