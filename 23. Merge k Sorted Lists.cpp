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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode result (0);
        ListNode* head = &result;
        //using priority queue
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>> > minHeap;
        for(int i=0 ; i<lists.size();i++) {
            ListNode* temp = lists[i];
            while(temp) {
                minHeap.push({temp->val,temp});
                temp = temp->next;
            }
        }
        while(!minHeap.empty()) {
            head->next = minHeap.top().second;
            minHeap.pop();
            head = head->next;
        }
        return result.next;
    }
};
