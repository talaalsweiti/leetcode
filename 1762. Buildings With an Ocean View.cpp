class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        stack<int> st;
        st.push(0);
        for(int i=1;i<heights.size();i++) {
            int top = st.top();
            while(!st.empty()&&heights[st.top()]<=heights[i]){
                st.pop();
            }
            st.push(i);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
