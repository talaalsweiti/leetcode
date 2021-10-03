class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int sum = 0 , maximum =INT_MIN;
        vector<int> ans;
        int left = 0;
        priority_queue<int> maxHeap;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            maxHeap.push(nums[i]);
            mp[nums[i]]++;
            if(i>=k-1) {
                while(!maxHeap.empty()&&mp.find(maxHeap.top())==mp.end()){
                    maxHeap.pop();
                }
                ans.push_back(maxHeap.top());
                mp[nums[left]]--;
                if(!mp[nums[left]]) {
                    mp.erase(nums[left]);
                }
                left++;
                
            }
        }
        return ans;
    }
};
