class Solution {
public:
    string defangIPaddr(string address) {
        string temp = "" , replace = "[.]";
        string result = "";
        for(int i=0;i<address.length();i++) {
            if(address[i]!='.'){
                result+=address[i];
            }
            else {
                result+=replace;
            }
        }
        return result;
    }
};
