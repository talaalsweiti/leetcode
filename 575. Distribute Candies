class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int half = candyType.size() / 2;
        sort(candyType.begin() , candyType.end());
        candyType.resize(unique(candyType.begin() , candyType.end() ) - candyType.begin());
        if(candyType.size()>half)
            return half;
        else
            return candyType.size();
    }
};
