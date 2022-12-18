package QuestionBank.Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution24 {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null){
            return head;
        }
        ListNode prev = new ListNode(0, head);
        ListNode next = head.next;
        ListNode res = prev;
        while(next != null){
            head.next = next.next;
            next.next = head;
            prev.next = next;
            if (head.next != null){
                prev = head;
                head = head.next;
                next = head.next;
            }else{
                break;
            }
        }
        return res.next;
    }

    public static void main(String[] args) {
        Solution24 solution24 = new Solution24();
    }
}