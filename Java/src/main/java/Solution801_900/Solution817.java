package Solution801_900;

import tool.ListNode;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution817 {
    public int numComponents(ListNode head, int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        int count = 0;
        while(head != null) {
            if (set.contains(head.val)){
                count++;
                while(head != null && set.contains(head.val)){
                    head = head.next;
                }
            }else{
                    head = head.next;
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution817 solution817 = new Solution817();
    }
}