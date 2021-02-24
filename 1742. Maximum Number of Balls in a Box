class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
     int n = highLimit -lowLimit + 1;
     vector<int> balls(54,0);
   
        int k =0;
    for(int i=lowLimit;i<=highLimit;i++) {
        int temp = i , sum =0;
        while(temp!=0) {
            int digit = temp%10;
            sum+=digit;
            temp/=10;
        }
        balls[sum]++;

        }
        int mx =  *max_element(balls.begin(), balls.end());
        return mx ;
    }
};
