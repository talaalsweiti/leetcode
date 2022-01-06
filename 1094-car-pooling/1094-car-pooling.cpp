class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[1]<b[1] || (a[1]==b[1] && a[2]<b[2])) return true;
        return false;
    }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       
        sort(trips.begin(),trips.end(),comp);
        priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> >> minHeap;
        
        int currentCapacity = 0;
 
        for(int i=0;i<trips.size();i++) {
            while(minHeap.size()&&minHeap.top().first<=trips[i][1]){
                currentCapacity-=minHeap.top().second;
                minHeap.pop();
            }
            currentCapacity+= trips[i][0];
            minHeap.push({trips[i][2],trips[i][0]});
            if(currentCapacity>capacity) return false;
        }
        return true;
    }
};