class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        vector<pair<char,int>> v;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        for(auto const& x :mp) {
            v.push_back({x.first,x.second});
        }
        //sort by value using lambda expression
        sort(v.begin(),v.end(), [](const pair<char,int> &a ,const pair<char,int> &b ) {
        return a.second > b.second;
    });
        string res = "";
        for(int i=0;i<v.size();i++) {
            while(v[i].second!=0) {
                res+=v[i].first;
                v[i].second--;
            }
        }
        return res;
    }
};
