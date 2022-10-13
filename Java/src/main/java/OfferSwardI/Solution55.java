package OfferSwardI;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution55 {
    public boolean isBalanced(TreeNode root) {
        if (root == null){
            return true;
        }
        boolean isBalanced = Math.abs(treeDepth(root.left) - treeDepth(root.right)) <= 1;
        if (!isBalanced){
            return false;
        }
        boolean left = isBalanced(root.left);
        boolean right = isBalanced(root.right);
        return left && right;
    }

    private int treeDepth(TreeNode root) {
        if (root == null){
            return 0;
        }
        int left = treeDepth(root.left) + 1;
        int right = treeDepth(root.right) + 1;
        return Math.max(left, right);
    }
    
    
    public static void main(String[] args) {
        Solution55 solution55 = new Solution55();
    }
}