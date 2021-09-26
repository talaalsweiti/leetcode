/*
Given an array of meeting time intervals intervals where intervals[i] = [starti, endi], return the minimum number of conference rooms required.

*/


class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        int roomsNum = 1; //minimum nuber of required rooms is 1
        minHeap.push({intervals[0][1],intervals[0][0]});
        for(int i=1;i<intervals.size();i++) {
            pair<int,int> top = minHeap.top();
            if(top.first > intervals[i][0]){ // if the meeting starts before the last one ends, we need a room
               roomsNum++;
            }
            else{
                minHeap.pop();
            }
            minHeap.push({intervals[i][1],intervals[i][0]});
            
        }
        return roomsNum;
    }
};
