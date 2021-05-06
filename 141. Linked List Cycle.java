public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode ptr1 = head , ptr2 = head ;
        //using fast and slow pointers , if the two pointers met then the list has a cycle in it
     
        while(ptr2!=null) {
            ptr1 =  ptr1.next;
            ptr2 = ptr2.next ;
            if(ptr2==null)
                break;
            ptr2 = ptr2.next ;
            if(ptr1==ptr2)
                return true;
        }
        return false;
    }
}
