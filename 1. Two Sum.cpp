class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++) {
                if(i!=j){
                    if(nums[i]+nums[j]==target)
                    {
    
                        ans.push_back(i);
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }

        sort(ans.begin(),ans.end());
        ans.resize(unique(ans.begin(),ans.end()) - ans.begin());
        
    return ans;
    }
};

//another sol.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
         vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int l =0;
        int r = nums.size()-1;
        while(l<r){
            int sum =temp[l]+temp[r]; 
            if(sum==target){
               int index = 0,index2 = 0;
                bool flg1 = false , flg = false;
                
                for(int i=0;i<nums.size();i++) {
                    if(temp[l]==nums[i]&&!flg1){
                        index=i; 
                    flg1 = true;
                    }
                    else if(nums[i]==temp[r]&&!flg){
                        index2=i; 
                        flg=true;
                    }
                    if(flg&&flg1)
                        break;
                       
                }
                ans.push_back(index);
                ans.push_back(index2); 
                break;
            }
            else if(sum<target)
                l++;
            else
                r--;
        }
        
    return ans;
    }
};





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++) {
                if(i!=j){
                    if(nums[i]+nums[j]==target)
                    {
                        
                        ans.insert(i);
                        ans.insert(j);
                        break;
                    }
                }
            }
        }
      vector <int> res(ans.begin(), ans.end());
        
    return res;
    }
};


////
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
      
        vector<int> result;
        for(int i=0;i<numbers.size();i++) {
            int temp = target- numbers[i];
            if(mp[temp]>0){
                result.push_back(mp[temp]-1);
                result.push_back(i);
                break;
            }
            else {
                mp[numbers[i]]=i+1;
            }
        }
        return result;
    }
};

