class Solution {
public:
    int maxPower(string s) {
        vector<int> cnt ;
        for(int i=0;i<s.length();) {
            int sum=1;
            int j =i+1;
            while(s[i]==s[j]&&j<s.length()){
                sum++;
                j++;
            }
            i+=sum;
            cnt.push_back(sum);
        }
    int mx = *max_element(cnt.begin(), cnt.end());
        return mx;
    }
};
