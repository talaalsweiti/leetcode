class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int size = temperatures.size();
        vector<int> ans(size,0);
        for(int i=size-1;i>=0;i--) {
            while(!st.empty() && st.top().first <= temperatures[i]) {
                st.pop();
            }
            if(!st.empty()) {
                ans[i] = abs(i- st.top().second);
            }
            st.push({temperatures[i],i});
        }
        return ans;
    }
};
