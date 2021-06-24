class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1 , high = 1e9 , mid ,hours , ans  ; 
        while(low<=high){
            mid = low + (high-low) /2 ;
            hours = findHours(mid,piles);
            if(hours>h){
                low=mid+1;
            }
            else if(hours<=h){
                ans=mid;
                high=mid-1;
            }
        }
        return ans ;
    }
    
    int findHours(int rate,vector<int>& piles) {
        int ans =0; 
        for(int i=0 ;i<piles.size() ;i++) {
            ans += ceil( (double)piles[i]/(double)rate );
        }
        return ans ;
    }
};




