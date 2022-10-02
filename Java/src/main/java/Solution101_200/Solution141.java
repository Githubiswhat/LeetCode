package Solution101_200;

import tool.ListNode;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution141 {
    public boolean hasCycle(ListNode head) {
        HashSet<ListNode> set = new HashSet<>();
        while(head != null) {
            if (set.contains(head)){
                return true;
            }else{
                set.add(head);
            }
            head = head.next;
        }
        return false;
    }


    public static void main(String[] args) {
        Solution141 solution141 = new Solution141();
    }
}