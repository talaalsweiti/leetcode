class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        for(int num:nums){
            sum-=num;
        }
        return sum;
    }
};

/*
we can use map
or we can use a predefiened array with size n 

[9,6,4,2,3,5,7,0,1]



*/