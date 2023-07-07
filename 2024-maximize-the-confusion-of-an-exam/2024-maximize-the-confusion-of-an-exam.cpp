class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        map<char,int> cnt;
        int left=0 , maxSize = 0, right =0;
        while(right<answerKey.size()){
            cnt[answerKey[right]]++;
            while(min(cnt['F'],cnt['T'])>k){
                cnt[answerKey[left]]--;
                left++;
            }
            maxSize = max(maxSize,right-left+1);
            right++;
        }
        return maxSize;
    }
};

/*

"TTFTTFTT"
1

*/