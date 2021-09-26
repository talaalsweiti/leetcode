/*
Given an array of meeting time intervals where intervals[i] = [starti, endi], determine if a person could attend all meetings.

*/
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(!intervals.size()) return true;
        sort(intervals.begin(),intervals.end());
        priority_queue<pair<int,int>> maxHeap;
        maxHeap.push({intervals[0][1],intervals[0][0]});
        for(int i=1;i<intervals.size();i++) {
            pair<int,int> top = maxHeap.top();
            if(top.first>intervals[i][0]){
                maxHeap.pop();
                top.second = min(intervals[i][0],top.second);
                top.first = max(intervals[i][1],top.first);
                maxHeap.push(top);
            }
            else{
                maxHeap.push({intervals[i][1],intervals[i][0]});
            }
        }
        return maxHeap.size()==intervals.size();
    }
};
