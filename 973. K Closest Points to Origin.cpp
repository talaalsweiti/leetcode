class Solution {
public:
    double distance(int i ,vector<vector<int>>& points) {
        int x = points[i][0]*points[i][0];
        int y  = points[i][1]*points[i][1];
        y+=x;
        return sqrt(y);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        if(k==points.size()) return points;
        vector<vector<int>> result;
        priority_queue<pair<double,int> ,vector<pair<double,int> >,greater<pair<double,int> >> minHeap;
        for(int i =0;i<points.size();i++) {
            minHeap.push({distance(i,points),i});
        }
   
        while(k--) {
            result.push_back(points[minHeap.top().second]);
            minHeap.pop();
        }
        return result;
    }
};
