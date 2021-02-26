class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp; 
        int sum=0;
      for(int i=0;i<nums.size();i++) {
     if(count(nums.begin(),nums.end(), nums[i]) == 1){
         sum+=nums[i];
     }
      }
   
   
        return sum;
    }
};

//another sol.

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
      for(int i=0;i<nums.size();i++) {
         mp[nums[i]]++;
      }
    int sum=0;
     for(auto& x :mp) {
         if(x.second == 1)
             sum+=x.first;
     }
        return sum;
    }
};
