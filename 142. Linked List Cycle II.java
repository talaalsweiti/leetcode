public class Solution {
    public ListNode detectCycle(ListNode head) {
              ListNode ptr1 = head , ptr2 = head , result =head;
        boolean flg = false;
        //using fast and slow pointers , if the two pointers met then the list has a cycle in it
        while(ptr2!=null) {
            ptr1 =  ptr1.next;
            ptr2 = ptr2.next ;
            if(ptr2==null) {
                break;
            }
            ptr2 = ptr2.next ;
            if(ptr1==ptr2)
               {
                flg = true ;
                break;
            }
        }
        //if they didn't met
        if(!flg)
            return null;
        //tp find the node where the cycle begins 
        while(flg && ptr2!=result) {
        ptr2 = ptr2.next ;
        result = result.next;
        }
        
        return result;
    }
}
