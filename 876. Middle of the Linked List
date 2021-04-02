class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode ptr1 = head;
        ListNode ptr2 = head;
        //using fast and slow pointers algorithm
        while(ptr2.next!=null) {
          ptr1 = ptr1.next;
          ptr2 = ptr2.next;
          ptr2 = ptr2.next;
          if(ptr2==null)
             break;
          
        }
        return ptr1;
    }
}
