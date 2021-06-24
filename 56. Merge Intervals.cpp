class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result ;
        if(intervals.size()<=1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++) {
           if(result.back()[1]>=intervals[i][0]) {
               
               if(result.back()[1]<intervals[i][1]) {
                  result.back()[1] = intervals[i][1];
               }
               
           }
            
         else{
            result.push_back(intervals[i]);       
        }
            
            
        }
        
        return result;
    }
};
