class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
     sort(costs.begin(),costs.end());
      if(costs[0]>coins) return 0;
      if(costs[0]==coins) return 1; 
        int i =0;    
    for(;i<costs.size()&&coins>0;i++){
        coins-=costs[i];
    }
        if(coins<0)
        return i-1;
        return i;
    }
};
