class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> cnt;
        int ans = -1 , max=-1;
        for(int num:nums){
            if(num%2==0){
                cnt[num]++;
            }
            
        }
        for(auto &x:cnt){
            if(x.second>max){
                ans=x.first;
                max=x.second;
            }
            
        }
        
        return ans; 
    }
};