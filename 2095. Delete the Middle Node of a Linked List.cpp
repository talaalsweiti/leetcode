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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if(!fast) break;
        }
        ListNode* ptr=  head;
        while(ptr->next!=slow){
            ptr= ptr->next;
        }
        ptr->next = ptr->next->next;
        return head;
    }
};
