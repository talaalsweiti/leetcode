class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,vector<int>> mp ;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }

        for(int i=0;i<arr.size();i++) {
            if(mp[arr[i]*2].size()){
                vector<int> v= mp[arr[i]*2];
                for(int j=0;j<v.size();j++){
                    if(v[j]!=i) return true;
                }
            }
        }

        return false;

    }
};