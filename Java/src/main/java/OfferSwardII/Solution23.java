package OfferSwardII;

import tool.ListNode;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution23 {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        HashSet<ListNode> set = new HashSet<>();
        while(headA != null){
            set.add(headA);
            headA = headA.next;
        }
        while(headB != null){
            if (set.contains(headB)){
                return headB;
            }
            headB = headB.next;
        }
        return null;
    }
    
    
    public static void main(String[] args) {
        Solution23 solution23 = new Solution23();
    }
}