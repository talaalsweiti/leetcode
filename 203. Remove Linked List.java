class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode result = new ListNode();
        ListNode ptr2 = result;
        ListNode ptr = head;
        while(ptr!=null) {
            if(ptr.val != val) {
            ptr2.next =  new ListNode (ptr.val );
              ptr2 = ptr2.next;
            }
            ptr = ptr.next;
        }
        return result.next;
    }
}
