class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        int ans =0 ;
        queue<int>q;
        q.push(start);
        map<int,int> visited;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int front = q.front();
                q.pop();
                if(front==goal) return ans;
                if(front<0 || front>1000 || visited[front]){
                    continue;
                }
                visited[front]=1;
                for(int i=0;i<nums.size();i++){
                    int x1 = front+nums[i];
                    int x2 = front - nums[i];
                    int x3= front^nums[i];
                        q.push(x1);
                        q.push(x2);
                        q.push(x3);
                }
            }

                ans++;
        }
        
        return-1;
    }
};