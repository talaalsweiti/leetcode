class Solution {
public:
    string customSortString(string S, string T) {
    map<char,int> mp;
    string temp = "";
    map<char,int> mp2;
        
     //count the occurence of every char in T 
    for(int i=0;i<T.length();i++) {
                mp[T[i]]++;
      }
        
      for(int i=0;i<S.length();i++) {
      int x= mp[S[i]];  // x = number of occurence of the char
          
       //add the char x times if it exists in T   
      if(mp[S[i]]>0)
      { 
         mp2[S[i]]++;
          
         while(x>0) {
         temp+=S[i];   
          x--;
        }
          
      }      
      }
        //to add the remaining chars 
          for(int i=0;i<T.length();i++) {
              if(mp2[T[i]]==0)
                  temp+=T[i];
          }
        
        return temp;
        
    }
};
