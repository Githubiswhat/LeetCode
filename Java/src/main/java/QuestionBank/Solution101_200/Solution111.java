package QuestionBank.Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution111 {
    public static void main(String[] args) {
        Solution111 solution111 = new Solution111();
    }

    public int minDepth(TreeNode root) {
        if (root == null) {
            return 0;
        }
        if (root.left == null) {
            return minDepth(root.right) + 1;
        }
        if (root.right == null) {
            return minDepth(root.left) + 1;
        }
        int left = minDepth(root.left) + 1;
        int right = minDepth(root.right) + 1;
        return Math.min(left, right);
    }
}