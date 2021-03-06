class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        if(gain.size()==0)return 0;
        int sum = 0,max = 0;
        for(int x : gain) {
            sum+=x;
            if(sum>max){
                max = sum;
            }
        }
    return max;
    }
};
