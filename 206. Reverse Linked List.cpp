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
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head ; 
        ListNode*  prev = NULL;
        ListNode* nextPtr = NULL;
         //the idea is let every node point on it's previous one
        while(current) {  
            //a pointer to the next node
            nextPtr = current->next;
            // a pointer to the previous node
            current->next = prev ;
            //update the pointers 
            prev = current;
            current = nextPtr;
           
        }
        return prev;
        
    }
};
