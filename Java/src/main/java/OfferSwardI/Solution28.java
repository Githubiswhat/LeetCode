package OfferSwardI;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution28 {
    public boolean isSymmetric(TreeNode root) {
        if (root == null){
            return true;
        }
        return isSymmetric(root.left, root.right);
    }

    private boolean isSymmetric(TreeNode left, TreeNode right) {
        if (left == null && right == null){
            return true;
        }
        if (left == null && right != null){
            return false;
        }
        if (left != null && right == null){
            return false;
        }
        return left.val == right.val && isSymmetric(left.left, right.right) && isSymmetric(left.right, right.left);
    }
    
    
    public static void main(String[] args) {
        Solution28 solution28 = new Solution28();
    }
}