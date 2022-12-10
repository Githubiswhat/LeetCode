package QuestionBank.Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution108 {
    public TreeNode sortedArrayToBST(int[] nums) {
        return process(nums, 0, nums.length - 1);
    }

    private TreeNode process(int[] nums, int begin, int end) {
        if (begin >= end){
            if (begin == end){
                return new TreeNode(nums[begin]);
            }
            return null;
        }
        int middle = (begin + end + 1) / 2;
        TreeNode root = new TreeNode(nums[middle]);
        root.left = process(nums, begin, middle - 1);
        root.right = process(nums, middle + 1, end);
        return root;
    }




    public static void main(String[] args) {
        Solution108 solution108 = new Solution108();
        TreeNode treeNode = solution108.sortedArrayToBST(new int[]{-10, -3, 0, 5, 9});
        System.out.println("=====");
    }
}