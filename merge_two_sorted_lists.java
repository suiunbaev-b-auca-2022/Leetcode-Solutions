class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode dummyHead = new ListNode(-1); // create a dummy node to serve as the head of the merged list
        ListNode current = dummyHead; // current node to keep track of the tail of the merged list

        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) { // take the smaller value
                current.next = l1;
                l1 = l1.next;
            } else {
                current.next = l2;
                l2 = l2.next;
            }
            current = current.next; // move the current pointer to the tail of the merged list
        }

        // append the remaining nodes of l1 or l2 to the merged list
        if (l1 != null) {
            current.next = l1;
        } else if (l2 != null) {
            current.next = l2;
        }

        return dummyHead.next; // return the head of the merged list
    }
}
