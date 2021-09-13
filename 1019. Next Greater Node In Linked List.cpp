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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* ptr = head;
       vector<int> nums ;
        while(ptr) {
            nums.push_back(ptr->val);
            ptr = ptr->next;
        }
        vector<int> result(nums.size());
        stack<int> greater;
        for(int i=nums.size()-1;i>-1;i--) {
            if(greater.empty()) {
                greater.push(nums[i]);
                result[i] = 0;
                continue;
            }
            while(!greater.empty()&&greater.top() <= nums[i]) {
                greater.pop();
            }
            result[i]= greater.empty() ? 0 : greater.top();
            greater.push(nums[i]);
        }
        return result;
    }
};
