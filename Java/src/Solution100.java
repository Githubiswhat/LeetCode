import tool.TreeNode;

/**
 * @author windows
 */
public class Solution100 {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        return dfs(p, q);
    }

    private boolean dfs(TreeNode p, TreeNode q){
        if (p == null || q == null) {
            if (p == null && q == null) {
                return true;
            }
            return false;
        }
        if (p.val != q.val){
            return false;
        }else{
            return dfs(p.left, q.left) && dfs(p.right, q.right);
        }
    }
}




