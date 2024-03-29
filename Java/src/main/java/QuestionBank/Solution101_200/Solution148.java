package QuestionBank.Solution101_200;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution148 {
//    public ListNode sortList(ListNode head) {
//        if (head == null || head.next == null){
//            return head;
//        }
//        ListNode dummy = new ListNode(0, head);
//        ListNode current = head.next;
//        ListNode sortNode = head;
//        while (current != null){
//            if (current.val < sortNode.val){
//                ListNode prev = dummy;
//                while (prev.next.val < current.val){
//                    prev = prev.next;
//                }
//                sortNode.next = current.next;
//                current.next = prev.next;
//                prev.next = current;
//                current = sortNode.next;
//            }else {
//                sortNode = sortNode.next;
//                current = current.next;
//            }
//        }
//        return dummy.next;
//    }

    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null){
            return head;
        }
        return sortList(head, null);
    }

    private ListNode sortList(ListNode head, ListNode tail){
        if (head == null){
            return head;
        }
        if (head.next == tail){
            head.next = null;
            return head;
        }
        ListNode fast = head;
        ListNode slow = head;
        while (fast != tail){
            slow = slow.next;
            fast = fast.next;
            if (fast != tail){
                fast = fast.next;
            }
        }
        ListNode mid = slow;
        ListNode left = sortList(head, mid);
        ListNode right = sortList(mid, tail);
        ListNode merge = merge(left, right);
        return merge;
    }

    private ListNode merge(ListNode head1, ListNode head2){
        ListNode dummy = new ListNode();
        ListNode temp = dummy, temp1 = head1, temp2 = head2;
        while (temp1 != null && temp2 != null){
            if (temp1.val < temp2.val){
                temp.next = temp1;
                temp1 = temp1.next;
            }else {
                temp.next = temp2;
                temp2 = temp2.next;
            }
            temp = temp.next;
        }
        while(temp1 != null){
            temp.next = temp1;
            temp1 = temp1.next;
            temp = temp.next;
        }
        while(temp2 != null){
            temp.next = temp2;
            temp2 = temp2.next;
            temp = temp.next;
        }
        return dummy.next;
    }

    public static void main(String[] args) {
        Solution148 solution148 = new Solution148();
    }
}