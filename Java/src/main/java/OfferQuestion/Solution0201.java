package OfferQuestion;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution0201 {
    public ListNode removeDuplicateNodes(ListNode head) {
        ListNode root = head;
        while(head != null) {
            while(head.next != null && head.next.val == head.val) {
                head.next = head.next.next;
            }
            head = head.next;
        }
        return root;
    }

}
