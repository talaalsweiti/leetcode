class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_map<int,bool> forbiddenPositions;
        for(int num:forbidden) {
            forbiddenPositions[num]=true;
        }
        queue<pair<int,bool>> q;
        q.push({0,false});
        int ans = 0;
        int current=1,next=0;
        vector<int> visited(6000);
        visited[0] = 1;
        while(!q.empty()) {
            pair<int,bool> front = q.front();
            q.pop();
            current--;
            
            if(front.first==x)return ans;
    
            if(front.first+a<6000 && !forbiddenPositions[front.first+a] && !visited[front.first+a]){
                q.push({front.first+a,false});
                visited[front.first+a]=1;
                next++;
            }
            if(front.first-b >= 0 && !front.second && !forbiddenPositions[front.first-b]  ) {
                q.push({front.first-b,true});

                next++;
            }
            if(!current){
                swap(current,next);
                ans++;
            }
        }
        
        return -1;
    }
};
