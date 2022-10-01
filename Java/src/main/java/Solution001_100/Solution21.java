package Solution001_100;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution21 {

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode head = new ListNode();
        ListNode node = head;
        while(list1 != null || list2 != null){
            int a = list1 == null ? 101 : list1.val;
            int b = list2 == null ? 101 : list2.val;
            ListNode listNode = null;
            if (a >= b){
                listNode = new ListNode(b);
                list2 = list2 == null ? null : list2.next;
            }else{
                listNode = new ListNode(a);
                list1 = list1 == null ? null : list1.next;
            }
            node.next = listNode;
            node = node.next;
        }
        return head.next;
    }



    public static void main(String[] args) {
        Solution21 solution21 = new Solution21();
    }
}