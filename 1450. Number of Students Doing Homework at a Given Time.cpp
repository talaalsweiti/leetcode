class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int> cumulativeSum (1010,0);
        for(int i=0;i<startTime.size();i++) {
            int left = startTime[i];
            int right = endTime[i];
            cumulativeSum[left]++;
            cumulativeSum[right+1]--;
        }
        for(int i=1;i<1010;i++) {
            cumulativeSum[i]+=cumulativeSum[i-1];
        }
        return cumulativeSum[queryTime];
    }
};
