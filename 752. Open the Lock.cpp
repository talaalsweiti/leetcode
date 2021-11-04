class Solution {
public:
    string helper(string str,int i,int mode) {
       string ans = "";
        for(int j=0;j<i;j++){
            ans+=str[j];
        }
        if(mode){
            if((str[i]-'0')+1==10){
                ans+='0';
            }else{
                ans+=to_string((str[i]-'0')+1);
            }
        }else{
             if((str[i]-'0')-1==-1){
                ans+='9';
            }else{
                ans+=to_string((str[i]-'0')-1);
            } 
        }
        for(int j=i+1;j<str.size();j++) {
            ans+=str[j];
        }
        return ans;
    }
    int openLock(vector<string>& deadends, string target) {
        int ans = 0;
        map<string,int> seenDeadends;
        for(string str : deadends) {
            seenDeadends[str] = 1;
            if(str=="0000") return -1;
        }
        queue<string> q;
        q.push("0000");
         seenDeadends["0000"] = 1;
        int current = 1 , next =0;
        while(!q.empty()) {
            string front = q.front();
            q.pop();
            current--;
            if(front==target) return ans;
            for(int i=0;i<front.size();i++) {
                //increase
                string temp = helper(front,i,1);
                
                if(!seenDeadends[temp]){
                    q.push(temp);
                    seenDeadends[temp]=1;
                    // cout << temp << endl;
                    next++;
                }
                temp =  helper(front,i,0);
               
                 if(!seenDeadends[temp]){
                    q.push(temp);
                      // cout << temp << endl;
                    seenDeadends[temp]=1;
                     next++;
                }
            }
            if(!current) {
                swap(next,current);
                // cout << "new\n";
                ans++;
            }
            
            
        }
        return -1;
    }
};
