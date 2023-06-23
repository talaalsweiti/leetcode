class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2) return {};
        vector<int> ans;
        map<int,int> mp;
        sort(changed.begin(),changed.end());
        
        for(int num:changed){
            mp[num]++;
        }
        for(int i=0;i<changed.size();i++){
            if(!mp[changed[i]] )continue;
            //we have the number but we don't have it's double
            if(!mp[changed[i]*2]) return {};
            mp[changed[i]*2]--;
            mp[changed[i]]--;
            ans.push_back(changed[i]);
           
        }
        if(ans.size()!=changed.size()/2) return {};
        return  ans;
    }
};

/*

[1,3,4,2,6,8,8,4]

[1,2,3,4,6,8,]
*/