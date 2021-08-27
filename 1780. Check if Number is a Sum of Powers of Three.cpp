class Solution {
public:
    bool checkPowersOfThree(int n) {
      //convert it to ternary number  (number uses only 0, 1 ,2 as digits )
        //if we have 2 in it so we cant represnt it 
        while(n) {
            if(n%3==2) return false;
            n/=3;
        }
        return true;
    }
};
