package QuestionBank.Solution101_200;

import tool.ListNode;
import tool.ListNodeGenerate;

/**
 * @author windows
 */
public class Solution147 {
    public ListNode insertionSortList(ListNode head) {
        ListNode dummy = new ListNode(0, head);
        if (head == null || head.next == null){
            return head;
        }
        ListNode current = head.next;
        ListNode sortNode = head;
        while (current != null){
            if (current.val < sortNode.val){
                ListNode prev = dummy;
                while(prev.next.val <= current.val){
                    prev = prev.next;
                }
                sortNode.next = current.next;
                current.next = prev.next;
                prev.next = current;
                current = sortNode.next;
            }else {
                sortNode = sortNode.next;
                current = current.next;
            }
        }
        return dummy.next;
    }


    public static void main(String[] args) {
        Solution147 solution147 = new Solution147();
        ListNode listNode = ListNodeGenerate.listNodeGenerate(new int[]{4, 2, 1, 3});
        solution147.insertionSortList(listNode);
    }
}