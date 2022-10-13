package OfferQuestion;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution1712 {
    TreeNode treeNode = new TreeNode(0);
    public TreeNode convertBiNode(TreeNode root) {
        TreeNode head = treeNode;
        process(root);
        return head.right;
    }

    private void process(TreeNode root){
        if (root == null){
            return;
        }
        process(root.left);
        TreeNode node = new TreeNode(root.val);
        treeNode.right = node;
        treeNode = node;
        process(root.right);
    }


}
