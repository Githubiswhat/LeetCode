package Solution601_700;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution671 {
    public int findSecondMinimumValue(TreeNode root) {
        if (root == null || root.left == null){
            return -1;
        }
        if (root.val != root.left.val){
            return root.left.val;
        }else if (root.val == root.right.val){
            return root.right.val;
        }else {
            int left = findSecondMinimumValue(root.left);
            int right = findSecondMinimumValue(root.right);
            if (left == -1 && right == -1){
                return -1;
            }
            if (left == -1){
                return right;
            }
            if (right == -1){
                return left;
            }
            return Math.min(left, right);
        }
    }



    public static void main(String[] args) {
        Solution671 solution671 = new Solution671();
    }
}