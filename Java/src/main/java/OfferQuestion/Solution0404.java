package OfferQuestion;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution0404 {
    public boolean isBalanced(TreeNode root) {
        if (root == null){
            return true;
        }
        int left = treeDepth(root.left);
        int right = treeDepth(root.right);
        if (Math.abs(left - right) > 1){
            return false;
        }
        return isBalanced(root.right) && isBalanced(root.left);
    }

    private int treeDepth(TreeNode root) {
        if (root == null){
            return 0;
        }
        return Math.max(treeDepth(root.left), treeDepth(root.right)) + 1;
    }



}
