class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int queriesSize= queries.size();
        vector<int> result(queriesSize,0);
        for(int i=0;i<queriesSize ;i++) {
            pair<int,int> center = make_pair(queries[i][0],queries[i][1]);
            int radius = queries[i][2];
            for(int j=0;j<points.size();j++) {
                double distance = pow((center.first-points[j][0]),2);
                distance+=pow((center.second-points[j][1]),2);
                double sqrtDis = sqrt(distance);
                if(sqrtDis<=radius){
                    result[i]++;
                }
            }
        }
        return result;
    }
};
