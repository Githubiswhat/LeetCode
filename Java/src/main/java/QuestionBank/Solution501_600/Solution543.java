package QuestionBank.Solution501_600;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution543 {
    int max = 1;
    public int diameterOfBinaryTree(TreeNode root) {
        if(root == null){
            return 0;
        }
        if (root.left == null && root.right == null){
            return 1;
        }
        max = Math.max(max, diameterOfBinaryTree(root.left) + diameterOfBinaryTree(root.right) + 1);
        return max;
    }


    public static void main(String[] args) {
        Solution543 solution543 = new Solution543();
    }
}