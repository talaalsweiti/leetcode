class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        set<int> st;
        for(int i=0;i<groupSizes.size();i++) {
            int cnt = groupSizes[i];
            vector<int> temp;
            int tempCnt = groupSizes[i];
            auto it = st.find(i);  
            if (it == st.end())  {
            temp.push_back(i);
            cnt--;
             int j = i+1;
            while(cnt>0) {
                if(groupSizes[j] == tempCnt)
                    {
                         temp.push_back(j);
                         st.insert(j);
                         cnt--;
                    }
                j++;
         
            }
         ans.push_back(temp);    
            }
              
            
        }
   return ans;
    }
};
