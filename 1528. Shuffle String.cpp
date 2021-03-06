class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "" ;
       map<int,char> mp;
        for(int i=0;i<s.length();i++) {
            mp[indices[i]] = s[i];
        }
  
    vector< pair<char,int>> vec;
 
    // copy key-value pairs from the map to the vector
   copy(mp.begin(), mp.end(), back_inserter<vector< pair<char,int>>>(vec));
 
    // sort the vector by increasing order of its pair's first value
    sort(vec.begin(), vec.end(),
            [](const  pair<char,int>& l, const  pair<char,int>& r) {
                    return l.first < r.first;
            });
     for (auto const &pair: vec) {
       ans+= pair.second ;
    }
        return ans;
    }
};

//another solution 

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "" ;
       map<int,char> mp;
        for(int i=0;i<s.length();i++) {
            mp[indices[i]] = s[i];
        }
  
   for (auto& x: mp) { 
       ans+=x.second;
    }
        return ans;
    }
};

//third sol.


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "" ;
        int j = 0,i=0;
       while( j<indices.size()) {
          if(indices[i]==j){
              ans+=s[i];
              j++;
              i=0;        
          }
          else
          i++;
      }

        return ans;
    }
};
