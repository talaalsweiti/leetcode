class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalSum =0 , ans =0 , windowSum=0 , left =0;
        int window = cardPoints.size()-k;
        for(int i=0;i<cardPoints.size();i++) {
            totalSum+=cardPoints[i];
        }
        if(k==cardPoints.size()) return totalSum;
        for(int i=0;i<cardPoints.size();i++) {
            windowSum+=cardPoints[i];
            if(i>=window-1) {
                ans = max(ans,totalSum-windowSum);
                windowSum-=cardPoints[left];
                left++;
            }
        }
        return ans;
    }
};
