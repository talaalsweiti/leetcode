class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        stack<int>nums;
        for(int i=0;i<stones.size();i++) {
            nums.push(stones[i]);
        }
        while(nums.size()>1){
            int y = nums.top();
            nums.pop();
            int x= nums.top();
            nums.pop();
            if(x==y) continue;
            vector<int>temp;
            y-=x;
            while(!nums.empty()&&y<nums.top()){
                temp.push_back(nums.top());
                nums.pop();
            }
            nums.push(y);
            for(int i=temp.size()-1;i>-1;i--){
                nums.push(temp[i]);
            }
        }
        if(!nums.empty())
            return nums.top();

        return 0;
    }
};
