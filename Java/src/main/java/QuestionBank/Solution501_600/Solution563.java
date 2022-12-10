package QuestionBank.Solution501_600;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution563 {
    public int findTilt(TreeNode root) {
        if (root == null){
            return 0;
        }
        int left = findTilt(root.left);
        int right = findTilt(root.right);
        int leftVal = root.left == null ? 0 : findTiltVal(root.left);
        int rightVal = root.right == null ? 0 : findTiltVal(root.right);
        return Math.abs(rightVal - leftVal) + left + right;
    }

    private int findTiltVal(TreeNode root) {
        if (root == null){
            return 0;
        }
        int left = findTiltVal(root.left);
        int right = findTiltVal(root.right);
        return left + right + root.val;
    }


    public static void main(String[] args) {
        Solution563 solution563 = new Solution563();
    }
}