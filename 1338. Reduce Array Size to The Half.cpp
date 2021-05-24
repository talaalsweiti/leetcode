class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> occurrences;
        for(int i=0;i<arr.size();i++) {
            occurrences[arr[i]]++;
        }
        vector<pair<int,int>> sortedPairs;
        copy(occurrences.begin(),occurrences.end(),back_inserter<vector<pair<int,int>>>(sortedPairs));
        //sort by value
           sort(sortedPairs.begin(),sortedPairs.end(),
               [](const pair<int,int>& l,const pair<int,int>& r){
                  return l.second > r.second; 
               });
        int result=0;
        int counter =0;
        for(auto const &pair:sortedPairs) {
            result++;
            counter+=pair.second;
            if(counter>=arr.size()/2)break;
        }
      return result;
    }
};
