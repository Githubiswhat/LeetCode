package QuestionBank.Solution601_700;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution617 {

    public TreeNode mergeTrees(TreeNode root1, TreeNode root2) {
        if (root1 == null && root2 == null){
            return null;
        }
        if (root1 != null && root2 != null){
            root1.val = root1.val + root2.val;
            if (root1.left != null && root2.left != null) {
                mergeTrees(root1.left, root2.left);
            }
            if (root1.left == null && root2.left != null){
                root1.left = root2.left;
            }
            if (root1.right != null && root2.right != null) {
                mergeTrees(root1.right, root2.right);
            }
            if (root1.right == null && root2.right != null){
                root1.right = root2.right;
            }
        }
        if (root1 == null && root2 != null){
            return root2;
        }
        return root1;
    }

    public static void main(String[] args) {
        Solution617 solution617 = new Solution617();
    }
}