package OfferSwardI;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution51 {
    public int maxDepth(TreeNode root) {
        if (root == null){
            return 0;
        }
        int left = maxDepth(root.left) + 1;
        int right = maxDepth(root.right) + 1;
        return Math.max(left, right);
    }

    
    
    public static void main(String[] args) {
        Solution51 solution51 = new Solution51();
    }
}