//4ms sol.
class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
      unordered_map<int,int> mp;
     for(int i=0;i<nums.size();i++){
         mp[nums[i]]++;
         int temp = nums[i]/2;
         if(mp[nums[i]*2]>0&&nums[i]!=0) return true;
         if(temp*2==nums[i]&&mp[temp]>0&&nums[i]!=0) return true;
         if(nums[i]==0 && mp[nums[i]]>1) return true;
     }
        return false;
    }
};

////////////

//8ms sol.
class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
         int temp = nums[i]*2;
         
         int index = lower_bound(nums.begin(),nums.end(),temp)-nums.begin();
        
         if(index<nums.size()&&nums[index]==temp&&index!=i) {
         // cout << temp;
             return true;
         }
     }
        return false;
    }
};
