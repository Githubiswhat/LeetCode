package OfferSwardI;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution27 {
    public TreeNode mirrorTree(TreeNode root) {
        if (root == null){
            return root;
        }
        TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;
        mirrorTree(root.left);
        mirrorTree(root.right);
        return root;
    }


    public static void main(String[] args) {
        Solution27 solution27 = new Solution27();
    }
}