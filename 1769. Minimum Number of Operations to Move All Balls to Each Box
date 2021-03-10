class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length(),0);
        vector<int> ones;
        for(int i=0;i<boxes.length();i++) {
          if(boxes[i]=='1')
             ones.push_back(i);
        }
         for(int i=0;i<boxes.length();i++) {
            for(int j=0;j<ones.size();j++) {
                    ans[i]+=(abs(i-ones[j]));   
            }
         }
    return ans;
    }
};
