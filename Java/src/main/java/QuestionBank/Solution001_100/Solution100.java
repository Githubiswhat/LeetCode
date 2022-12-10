package QuestionBank.Solution001_100;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution100 {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        return dfs(p, q);
    }

    private boolean dfs(TreeNode p, TreeNode q) {
        if (p == null || q == null) {
            return p == null && q == null;
        }
        if (p.val != q.val) {
            return false;
        } else {
            return dfs(p.left, q.left) && dfs(p.right, q.right);
        }
    }
}




