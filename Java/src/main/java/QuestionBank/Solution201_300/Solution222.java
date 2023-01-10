package QuestionBank.Solution201_300;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution222 {
    public int countNodes(TreeNode root) {
        if (root == null) {
            return 0;
        }
        if (root.left == null && root.right == null) {
            return 1;
        }
        int left = countNodes(root.left);
        int right = countNodes(root.right);
        return left + right + 1;
    }



    public static void main(String[] args) {
        Solution222 solution222 = new Solution222();
    }
}