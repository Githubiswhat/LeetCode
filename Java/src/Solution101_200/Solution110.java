package Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution110{
    public boolean isBalanced(TreeNode root) {
        if (root == null){
            return true;
        }
        boolean flag = isBalanced(root.left) && isBalanced(root.right);
        if (!flag){
            return false;
        }
        int left = dfs(root.left);
        int right = dfs(root.right);
        return Math.abs(left - right) <= 1;
    }

    private int dfs(TreeNode root){
        if (root == null){
            return 0;
        }
        int left = dfs(root.left) + 1;
        int right = dfs(root.right) + 1;
        return Math.max(left, right);
    }




    public static void main(String[] args) {
        Solution110 solution110 = new Solution110();
    }
}