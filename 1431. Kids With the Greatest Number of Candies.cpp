class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
	int mx = *max_element(candies.begin(), candies.end());
        vector<bool> rs ;
        for(int c : candies){
            if((c+extraCandies)>=mx){
                rs.push_back(true);
            }
            else{
                    rs.push_back(false);
            }
        }
        return rs;
    }
};
