class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>>maxHeap;
        for(int i=0;i<points.size();i++){
            int x = points[i][0]*points[i][0];
            int y = points[i][1]*points[i][1];
            double dis = sqrt(x+y);
            maxHeap.push({dis,i});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        vector<vector<int>> ans;
        while(maxHeap.size()) {
            int index = maxHeap.top().second;
            maxHeap.pop();
            ans.push_back({points[index][0],points[index][1]});
        }
        return ans;
    }
};