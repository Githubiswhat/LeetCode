package QuestionBank.Solution201_300;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution226 {
    public TreeNode invertTree(TreeNode root) {
        if (root == null){
            return root;
        }
        TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;
        invertTree(root.left);
        invertTree(root.right);
        return root;
    }


    public static void main(String[] args) {
        Solution226 solution226 = new Solution226();
    }
}