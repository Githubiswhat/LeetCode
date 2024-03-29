package QuestionBank.Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution92 {
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode root = new ListNode(0, head);
        head = root;
        for (int i = 0; i < right; i++) {
            head = head.next;
        }
        ListNode rightAfterNode = head.next;
        head.next = null;
        head = root;
        for (int i = 0; i < left - 1; i++) {
            head = head.next;
        }
        ListNode leftBeforeNode = head;
        ListNode leftNode = leftBeforeNode.next;
        ListNode reverse = reverseListNode(leftNode);
        leftBeforeNode.next = reverse;
        leftNode.next = rightAfterNode;
        return root.next;
    }

    private ListNode reverseListNode(ListNode head){
        ListNode prev = null;
        while (head != null) {
            ListNode temp = head.next;
            head.next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }



    public static void main(String[] args) {
        Solution92 solution92 = new Solution92();
    }
}