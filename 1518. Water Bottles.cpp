class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt = numBottles;
        int temp = numBottles;
        while(numBottles>=numExchange){
            temp/=numExchange;
            cnt+=temp;
            numBottles = temp + (numBottles%numExchange);
            temp = numBottles;
            
            
        }
        
        return cnt ;
    }
};
