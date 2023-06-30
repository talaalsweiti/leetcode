class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long ans = 0;
        map<double,vector<int>> ratios;
        for(int i=0;i<rectangles.size();i++){
            ratios[(double)rectangles[i][0]/rectangles[i][1]].push_back(i);
            
        }
        for(auto &x: ratios){
            int temp = x.second.size();
            while(temp--){
                 ans+=temp;
            }
           
        }
        return ans;
        
    }
};