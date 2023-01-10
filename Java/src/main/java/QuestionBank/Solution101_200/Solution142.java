package QuestionBank.Solution101_200;

import tool.ListNode;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution142 {
    public ListNode detectCycle(ListNode head) {
        HashSet<ListNode> set = new HashSet<>();
        while (head != null) {
            if (set.contains(head)){
                return head;
            }else{
                set.add(head);
            }
            head = head.next;
        }
        return null;
    }


    public static void main(String[] args) {
        Solution142 solution142 = new Solution142();
    }
}