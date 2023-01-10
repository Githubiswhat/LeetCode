package QuestionBank.Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution61 {
    public ListNode rotateRight(ListNode head, int k) {
        if (k == 0 || head == null || head.next == null) {
            return head;
        }
        ListNode root = head;
        int n = 1;
        while (head.next != null) {
            head = head.next;
            n++;
        }
        if (k % n == 0){
            return head;
        }
        k = n - k % n;
        head.next = root;
        for (int i = 0; i < k; i++) {
            head = head.next;
        }
        root = head.next;
        head.next = null;
        return root;
    }


    public static void main(String[] args) {
        Solution61 solution61 = new Solution61();
    }
}