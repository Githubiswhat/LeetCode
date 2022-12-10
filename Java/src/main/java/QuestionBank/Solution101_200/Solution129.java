package QuestionBank.Solution101_200;

import tool.TreeNode;

import static tool.TreeGenerate.createTree;

/**
 * @author windows
 */
public class Solution129 {
    public int sumNumbers(TreeNode root) {
        return process(root, 0);
    }

    private int process(TreeNode root, int sum){
        if (root == null){
            return 0;
        }
        sum = sum * 10 + root.val;
        if (root.left == null && root.right == null){
            return sum;
        }
        int left = process(root.left, sum);
        int right = process(root.right, sum);
        return left + right;
    }






    public static void main(String[] args) {
        Solution129 solution129 = new Solution129();
        System.out.println(solution129.sumNumbers(createTree(new Integer[]{4, 9, 0, 5, 1})));
    }
}