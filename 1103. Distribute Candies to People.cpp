class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people,0);
        int i = 1 , j =0;
        while(candies) {
            if(j==num_people)  {
                j=0;
            }
            if(i>candies) {
               result[j]+= candies;
                break;
            }
            result[j]+= i;
            candies-=i;
            i++;
            j++;
        }
        return result;
    }
};
