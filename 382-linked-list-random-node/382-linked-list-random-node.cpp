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
    map<int,ListNode* > nodes;
    int size =0;
    Solution(ListNode* head) {
        ListNode* ptr = head;
        int index = 0;
        while(ptr) {
            nodes[index] = ptr;
            index++;
            ptr=ptr->next;
        }
        size = index;
    }
    
    int getRandom() {
        return nodes[rand()%size]->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */