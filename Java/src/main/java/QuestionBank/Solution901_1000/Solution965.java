package QuestionBank.Solution901_1000;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution965 {
    public boolean isUnivalTree(TreeNode root) {
        if (root == null){
            return true;
        }
        boolean leftEqual = true;
        boolean rightEqual = true;
        if (root.left != null){
            leftEqual = root.left.val == root.val && isUnivalTree(root.left);
        }
        if (root.right != null){
            rightEqual = root.right.val == root.val && isUnivalTree(root.right);
        }
        return leftEqual && rightEqual;
    }


    public static void main(String[] args) {
        Solution965 solution965 = new Solution965();
    }
}