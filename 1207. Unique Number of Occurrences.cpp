class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        bool flg = true;
        for(auto& x : mp) {
            
            for(auto& y :mp)
            {
                if(x.first!=y.first && x.second==y.second)
                {
                    flg = false;
                    break;
                }
            }
            }
        return flg;
    }
};
