package QuestionBank.Solution101_200;

import tool.ListNode;
import tool.TreeNode;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution109 {
    public TreeNode sortedListToBST(ListNode head) {
        ArrayList<Integer> list = new ArrayList<>();
        while(head != null) {
            list.add(head.val);
            head = head.next;
        }
        int[] nums = new int[list.size()];
        for (int i = 0; i < nums.length; i++) {
            nums[i] = list.get(i);
        }
        return process(nums, 0, nums.length - 1);
    }

    private TreeNode process(int[] nums, int begin, int end) {
        if (begin > end){
            return null;
        }
        if (begin == end) {
            return new TreeNode(nums[begin]);
        }
        int mid = begin + (end - begin) / 2;
        TreeNode root = new TreeNode(nums[mid]);
        root.left = process(nums, begin, mid - 1);
        root.right = process(nums, mid + 1, end);
        return root;
    }




    public static void main(String[] args) {
        Solution109 solution109 = new Solution109();
    }
}