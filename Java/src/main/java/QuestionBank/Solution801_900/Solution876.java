package QuestionBank.Solution801_900;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution876 {
    public ListNode middleNode(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null){
            fast = fast.next == null ? null : fast.next;
            fast = fast.next == null ? null : fast.next;
            slow = slow.next;
        }
        return slow;
    }


    public static void main(String[] args) {
        Solution876 solution876 = new Solution876();
    }
}