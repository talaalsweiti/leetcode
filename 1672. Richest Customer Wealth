class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;
        //int max = wealth[0]; 
        for(int i=0;i<accounts.size();i++) {
            int sum =0;
            for(int j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            wealth.push_back(sum);
            // if(wealth[i] >max){
            //     max =wealth[i] ;
            // }
        }
        int mx = *max_element(wealth.begin(), wealth.end());
    return mx;
    }
};

//another sol.
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth (accounts.size(),0);
        int max = wealth[0]; 
        for(int i=0;i<accounts.size();i++) {
            int sum =0;
            for(int j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            wealth[i] = sum;
            if(wealth[i] >max){
                max =wealth[i] ;
            }
        }
    return max;
    }
};
