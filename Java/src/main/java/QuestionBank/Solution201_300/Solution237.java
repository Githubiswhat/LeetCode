package QuestionBank.Solution201_300;

import tool.ListNode;

/**
 * @author windows
 */
public class Solution237 {
    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }


    public static void main(String[] args) {
        Solution237 solution237 = new Solution237();
    }
}