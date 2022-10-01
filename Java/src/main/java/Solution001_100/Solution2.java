package Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution2 {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode result = new ListNode();
        ListNode header = result;
        while (l1 != null || l2 != null) {
            int a = l1 != null ? l1.val : 0;
            int b = l2 != null ? l2.val : 0;
            int sum = (a + b + carry);
            carry = sum / 10;
            result.next = new ListNode(sum % 10);
            result = result.next;
            if (l1 != null) {
                l1 = l1.next != null ? l1.next : null;
            }
            if (l2 != null) {
                l2 = l2.next != null ? l2.next : null;
            }
        }
        if (carry == 1) {
            result.next = new ListNode(carry);
        }
        return header.next;
    }
}
