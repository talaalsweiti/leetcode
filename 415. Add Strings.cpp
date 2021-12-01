class Solution {
public:
    string helper(int index , string num,string ans,int &carry) {
        while(index>=0){
            int sum = (num[index]-'0')+carry;
            if(sum>9) {
                carry = 1;
                string temp = to_string(sum);
                ans=temp[1]+ans;
            }else{
                carry =0 ;
                ans=to_string(sum)+ans;
            }
            index--;
        }
        return ans;
    }
    string addStrings(string num1, string num2) {
        int carry = 0 ;
        string ans = "";
        int firstNum = num1.size()-1 , secondNum = num2.size()-1;
        while(firstNum>=0 && secondNum>=0 ) {
            int sum = (num1[firstNum]-'0')+(num2[secondNum]-'0');
            sum+=carry;
            if(sum>9) {
                carry = 1;
                string temp = to_string(sum);
                ans=temp[1]+ans;
            }else{
                carry =0 ;
                ans=to_string(sum)+ans;
            }
          
            firstNum--;
            secondNum--;
        }
    
        if(firstNum>=0 ){
           ans=helper(firstNum,num1,ans,carry);
        }
        if(secondNum>=0 ){
           ans=helper(secondNum,num2,ans,carry);
        }
        if(carry) {
            ans="1" +ans;
        }
        return ans;
    }
};

/*


11
123


456
77

33
*/
