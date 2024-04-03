package QuestionBank.Solution1301_1400;
/**
 * @author windows
 */
public class Solution1379 {

    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        if (original == null || original == null) return null;
        if (original == target) return cloned;
        TreeNode left = getTargetCopy(original.left, cloned.left, target);
        if (left != null) return left;
        return getTargetCopy(original.right, cloned.right, target);
    }
    
    
    public static void main(String[] args) {
        Solution1379 solution1379 = new Solution1379();
    }


    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }
}
