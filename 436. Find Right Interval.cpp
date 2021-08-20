class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        priority_queue<pair<int,int>> maxStart;
        priority_queue<pair<int,int>> maxEnd;
        for(int i=0;i<intervals.size();i++) {
            maxStart.push({intervals[i][0],i});
            maxEnd.push({intervals[i][1],i});
        }
        vector<int> result(intervals.size(),-1);
        while(!maxEnd.empty()) {
            pair<int,int> topEnd = maxEnd.top() ;
            int index = topEnd.second;
            maxEnd.pop();
            if(intervals[index][1]<=intervals[ maxStart.top().second][0]){
                pair<int,int> topStart = maxStart.top();
                maxStart.pop();
                while(!maxStart.empty() && intervals[index][1]<=intervals[maxStart.top().second][0])  {
                    topStart = maxStart.top() ;
                    maxStart.pop();
                }
                result[index] = topStart.second;
                maxStart.push(topStart);
            }
        }
        return result;
    }
};
