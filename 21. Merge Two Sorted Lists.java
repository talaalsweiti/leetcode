class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode result = new ListNode();
        ListNode ptr2 = result;
        if(l1==null)
            return l2;
        if(l2==null)
            return l1;
        while(l2!=null && l1!=null) {
            if(l1.val < l2.val  ){
                 ptr2.next =  new ListNode (l1.val );
                  ptr2 = ptr2.next;
                  l1 = l1.next ;
            }
            else if( l1.val  >l2.val  ) {
                ptr2.next= new ListNode (l2.val );
                ptr2 = ptr2.next;
                l2 = l2.next ;
              
            }
            else {
                ptr2.next= new ListNode (l2.val );
                 ptr2 = ptr2.next;
                ptr2.next =  new ListNode (l1.val );
                ptr2 = ptr2.next;
                l2 = l2.next ;
                l1 = l1.next ;
            }
            
        } 
        //if any of the lists it's size bigger than the other one we add it's elemsnts after merging
        while(l1!=null) {
                ptr2.next =  new ListNode (l1.val );
                  ptr2 = ptr2.next;
                  l1 = l1.next ;
        }
        while(l2!=null) {
             ptr2.next= new ListNode (l2.val );
                ptr2 = ptr2.next;
                l2 = l2.next ;
        }
        return result.next;
    }
}
