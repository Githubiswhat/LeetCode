package Solution101_200;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution101{
    public boolean isSymmetric(TreeNode root) {
        if (root == null){
            return true;
        }
        return dfs(root.left, root.right);
    }

    private boolean dfs(TreeNode left, TreeNode right){
        if (left == null || right == null){
            if (left == null && right == null){
                return true;
            }
            return false;
        }
        if (left.val != right.val){
            return false;
        }
        return dfs(left.left, right.right) && dfs(left.right, right.left);
    }

    public static void main(String[] args) {
        Solution101 solution101 = new Solution101();

    }
}