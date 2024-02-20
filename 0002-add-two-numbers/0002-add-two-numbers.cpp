/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp_ans= ans;        
        int carry =0;

        while(l1 || l2 || carry){
           int sum =0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum += l2->val;
                l2= l2->next;
            }
            sum+=carry;
            carry=sum/10;
            temp_ans->next=new ListNode(sum%10);
            temp_ans=temp_ans->next;
        }
      
        return ans->next;
    }
};

/*

[9]
[1,9,9,9,9,9,9,9,9,9]

1
+ 90
+ 900
+ 9000

*/