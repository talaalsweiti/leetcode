/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        ListNode result = new ListNode();
        ListNode ptr = result;
        ListNode ptr1 = head;
        int i = 1 ;
        while(ptr1!=null) {
            if(i%2!=0) {
                 ptr.next= new ListNode (ptr1.val);
                 ptr = ptr.next;
            }
            ptr1 = ptr1.next;
            i++;
        }
        ptr1 =head;
            i=0;
          while(ptr1!=null) {
            if(i%2!=0) {
                 ptr.next= new ListNode (ptr1.val);
                 ptr = ptr.next;
            }
            ptr1 = ptr1.next;
            i++;
        }
        return result.next;
    }
}
