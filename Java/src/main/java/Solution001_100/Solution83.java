package Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution83 {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode root = head;
        while(head != null) {
            while(head.next != null && head.next.val == head.val){
                   head.next = head.next.next;
            }
            head = head.next;
        }
        return root;
    }


    public static void main(String[] args) {
        Solution83 solution83 = new Solution83();
    }
}