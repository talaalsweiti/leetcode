class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int> allPaths;
       allPaths[{0,0}]++;
        int x =0 , y=0;
        for(int i=0;i<path.size();i++) {
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S') {
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else{
                x--;
            }
             allPaths[{x,y}]++;
            if(allPaths[{x,y}]>=2) return true;
        }
        return false;
    }
};
