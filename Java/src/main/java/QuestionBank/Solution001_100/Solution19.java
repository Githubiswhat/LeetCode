package QuestionBank.Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution19 {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head == null){
            return null;
        }
        ListNode fast = head;
        ListNode cur = head;
        ListNode prev = new ListNode(0, head);
        head = prev;
        for (int i = 0; i < n; i++) {
            fast = fast.next;
        }
        while(fast != null){
            prev = prev.next;
            cur = cur.next;
            fast = fast.next;
        }
        prev.next = cur.next;
        return head;
    }


    public static void main(String[] args) {
        Solution19 solution19 = new Solution19();
    }
}