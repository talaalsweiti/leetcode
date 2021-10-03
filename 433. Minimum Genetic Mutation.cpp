class Solution {
public:
    bool check(string str1, string str2) {
        int cnt =0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[i]) cnt++;
        }
        return cnt==1;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        int ans = 0 ;
        queue<string> q;
        q.push(start);
        map<string,bool> visit;
        int current =1 , next =0 , level = 0;
        while(!q.empty()) {
            string front = q.front();
            if(front==end) return level;
            q.pop();
            current--;
            visit[front] = true;
            for(string word : bank) {
                if(!visit[word]&&check(front,word)){
                    q.push(word);
                    next++;
                }
            }
            if(!current){
                swap(current,next);
                level++;
            }
        }
        return -1;
    }
};
