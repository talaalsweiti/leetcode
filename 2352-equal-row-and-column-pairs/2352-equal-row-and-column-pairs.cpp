class Solution {
public:
//0 for row , 1 for col
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0 ,n = grid.size();
        map<int,vector<int>> rows;
        map<int,vector<int>> cols;
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<n;j++){
               //store rows;
               v.push_back(grid[i][j]);
               cols[j].push_back(grid[i][j]);
            }
            rows[i]=v;
        }
        for(int i=0;i<n;i++) {
            for(int k=0;k<n;k++){
                if(rows[i]==cols[k]) ans++;
            }
        }

        return ans;

    }
};