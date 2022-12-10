package QuestionBank.Solution001_100;

import tool.TreeNode;

import static tool.TreeGenerate.createTree;

/**
 * @author windows
 */
public class Solution98 {
    public boolean isValidBST(TreeNode root) {
        return isValidBST(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }

    private boolean isValidBST(TreeNode root, long minValue, long maxValue) {
        if (root == null) {
            return true;
        }
        if (root.val <= minValue || root.val >= maxValue){
            return false;
        }
        return isValidBST(root.left, minValue, root.val) && isValidBST(root.right, root.val, maxValue);
    }


    public static void main(String[] args) {
        Solution98 solution98 = new Solution98();
        TreeNode tree = createTree(new Integer[]{32,26,47,19,null,null,56,null,27});
        System.out.println(solution98.isValidBST(tree));
    }
}