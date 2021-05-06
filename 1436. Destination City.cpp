class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string , int > mp;
            map<string , int > mp2;
        for(int i=0;i<paths.size();i++) {
           mp[paths[i][0]]++;
           mp2[paths[i][1]]++;
       }
        
      for (auto& x: mp2) {
        if(x.second == 1 ){
            string test = x.first;
            if(!mp.count(test))
            {
                
               return x.first;
            }
        }
      }
       return paths[paths.size()-1][1];
    }
};
