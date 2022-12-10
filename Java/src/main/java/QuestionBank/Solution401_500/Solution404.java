package QuestionBank.Solution401_500;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution404 {
    int sum = 0;
    public int sumOfLeftLeaves(TreeNode root) {
        process(root);
        return sum;
    }

    private void process(TreeNode root) {
        if (root == null) {
            return;
        }
        if (root.left != null && root.left.left == null && root.left.right == null) {
            sum += root.left.val;
        }
        process(root.left);
        process(root.right);
    }


    public static void main(String[] args) {
        Solution404 solution404 = new Solution404();
    }
}