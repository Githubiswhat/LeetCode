package QuestionBank.Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution112 {
    public static void main(String[] args) {
        Solution112 solution112 = new Solution112();
    }

    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return false;
        }
        if (root.left == null && root.right == null) {
            return targetSum - root.val == 0;
        }
        boolean left = hasPathSum(root.left, targetSum - root.val);
        boolean right = hasPathSum(root.right, targetSum - root.val);
        return left || right;
    }
}