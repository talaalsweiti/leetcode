class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans =0;
        for(int i=0;i<colors.size()-1;i++)
        {
            for(int j=i+1;j<colors.size();j++){
                if(colors[i]!=colors[j] && j-i>ans){
                    ans = j-i;
                }
            }
        }
        return ans;
    }
};


/*


[1,1,6,1,1,1]


*/