class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> permution(m,0);
        for(int i=0;i<m;i++) {
            permution[i]=i+1;
        }
        
        for(int i=0;i<queries.size();i++) {
            int index = 0;
            for(int j = 0;j<m;j++) {
                if(permution[j]==queries[i]){
                    index = j;
                    int temp = permution[j];      
                    permution.erase(permution.begin()+j);
                    permution.insert(permution.begin(),temp);
                    break;
                    
                }
            }
            queries[i] = index;
        }
        return queries;
    }
};
