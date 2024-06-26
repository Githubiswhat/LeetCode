package QuestionBank.Solution201_300;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution236 {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || p == root || q == root) {
            return root;
        }
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);
        if (left != null && right != null) {
            return root;
        }
        if (left == null){
            return right;
        }
        return left;
    }

    public static void main(String[] args) {
        Solution236 solution236 = new Solution236();
    }
}