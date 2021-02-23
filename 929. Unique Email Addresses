class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int i ;
        string temp ;
        set<string> str;
        for(int j=0;j<emails.size();j++) {
            i=0;
            temp = "";
           while(emails[j][i]!='@' && emails[j][i]!='+'){
            if(emails[j][i]!='.'){
                temp=temp + emails[j][i];
            }
             i++;
            }
            while(emails[j][i]!='@'){
                i++;
            }
      
            temp = temp + emails[j].substr(i, emails[j].size()-1);
           str.insert(temp); 
        
        }

        
       return str.size();
        
    }
};
