package Solution201_300;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution234 {
    public boolean isPalindrome(ListNode head) {
        StringBuilder sb = new StringBuilder();
        while (head != null) {
            sb.append(head.val);
            head = head.next;
        }
        return sb.toString().equals(sb.reverse().toString());
    }


    public static void main(String[] args) {
        Solution234 solution234 = new Solution234();
    }
}