package tool;

/**
 * @author windows
 */
public class ListGenerate {
    public ListNode ListGenerate(int[] nums){
        ListNode head = new ListNode();
        ListNode node = head;
        for (int i = 0; i < nums.length; i++) {
            ListNode listNode = new ListNode(nums[i]);
            node.next = listNode;
            node = node.next;
        }
        return head.next;
    }
}
