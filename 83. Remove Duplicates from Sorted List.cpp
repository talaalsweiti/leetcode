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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* newHead = new ListNode(head->val);
        ListNode* ptr = newHead;
        head = head->next;
        while(head){
            if(ptr->val!=head->val) {
                ptr->next = new ListNode(head->val);
                ptr = ptr->next;
            }
            head=head->next;
        }
        
        
        return newHead;
    }
};
