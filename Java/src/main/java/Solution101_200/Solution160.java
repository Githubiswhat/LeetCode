package Solution101_200;

import tool.ListNode;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution160 {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        HashSet<ListNode> set = new HashSet<>();
        while(headA != null) {
            set.add(headA);
            headA = headA.next;
        }
        while(headB != null) {
            if (set.contains(headB)) {
                return headB;
            }
            headB = headB.next;
        }
        return null;
    }


    public static void main(String[] args) {
        Solution160 solution160 = new Solution160();
    }
}