package QuestionBank.Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution104 {
    public static void main(String[] args) {
        Solution104 solution104 = new Solution104();
    }

    public int maxDepth(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int left = 0;
        int right = 0;
        left = maxDepth(root.left) + 1;
        right = maxDepth(root.right) + 1;
        return Math.max(left, right);
    }
}