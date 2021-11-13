class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k) return false;
        map<int,int> occurrences;
        for(int num:nums) occurrences[num]++;
        while(occurrences.size()) {
            int currentNum = occurrences.begin() -> first;
            occurrences[currentNum]--;
            if(!occurrences[currentNum]) 
                occurrences.erase(currentNum);
            for(int i=1;i<k;i++) {
                currentNum++;
                occurrences[currentNum]--;
                // cout <<  currentNum <<endl;
                if(occurrences[currentNum]<0) return false;
                if(!occurrences[currentNum]) 
                    occurrences.erase(currentNum);
            }
        }
          return true;
          
    }
};
