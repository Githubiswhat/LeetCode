package QuestionBank.Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution82 {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null){
            return null;
        }
        ListNode dummy = new ListNode(-101, head);
        ListNode cur = dummy;
        while (cur.next != null && cur.next.next != null){
            if (cur.next.val == cur.next.next.val){
                int x = cur.next.val;
                while(cur.next != null && cur.next.val == x){
                    cur.next = cur.next.next;
                }
            }else {
                cur = cur.next;
            }
        }
        return dummy.next;
    }


    public static void main(String[] args) {
        Solution82 solution82 = new Solution82();
    }
}