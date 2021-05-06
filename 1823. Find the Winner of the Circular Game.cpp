class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v ;
        vector<int> visited  ;
        for(int i=0;i<n;i++) {
          v.push_back(i+1);
          visited.push_back(0); 
        }
        int i = -1 ;
        int temp = k;
        while(true) {
            if(count(visited.begin(),visited.end(),0)==1) break;
            while(temp--) {
                i++;
                if(i==n) i=0;
                if(visited[i]) temp++;
            }
            temp = k; 
            visited[i] = 1 ; 
        }
        i=0;
        for(;i<n;i++){
            if(!visited[i]) break;
        }
    
        return v[i];
    }
};
