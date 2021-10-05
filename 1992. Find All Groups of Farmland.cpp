class Solution {
public:
    bool check(int i , int j , vector<vector<int>>& land) {
        if(i<0 || i>=land.size()) return false;
        if(j<0 ||j>=land[i].size()) return false;
        if(!land[i][j]) return false;
        return true;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        map<pair<int,int>,bool> visit;
        vector<vector<int>> ans;
        queue<pair<int,int>>st;
        pair<int,int> firstCoordinates = {-1,-1};
        for(int i=0;i<land.size();i++) {
            for(int j=0;j<land[i].size();j++) {
                 vector<int> temp;
                if(land[i][j]) {
                    land[i][j] =0 ;
                    temp.push_back(i);
                     temp.push_back(j); 
                    st.push({i,j});
                    pair<int,int> last={i,j};
                    while(!st.empty()){
                        pair<int,int> front = st.front();
                        st.pop();
                       
                        int dx[4] = {1,-1,0,0};
                        int dy[4]={0,0,1,-1};
                        for(int k=0;k<4;k++) {
                            if(check(front.first+dx[k],front.second+dy[k],land)){
                                 land[front.first+dx[k]][front.second+dy[k]] = 0;
                                st.push({front.first+dx[k],front.second+dy[k]});
                            }
                        }
                        last.first = front.first;
                        last.second = front.second;
                    }
                    temp.push_back(last.first);
                    temp.push_back(last.second);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
