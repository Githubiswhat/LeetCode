package QuestionBank.Solution901_1000;

import tool.TreeNode;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution938 {
    ArrayList<Integer> list = new ArrayList<>();
    public int rangeSumBST(TreeNode root, int low, int high) {
        process(root, low, high);
        int sum = 0;
        for (int i = 0; i < list.size(); i++) {
            sum += list.get(i);
        }
        return sum;
    }

    private void process(TreeNode node, int low, int high) {
        if (node == null){
            return;
        }
        if (node.val <= high && node.val >= low){
            list.add(node.val);
        }
        process(node.left, low, high);
        process(node.right, low, high);
    }




    public static void main(String[] args) {
        Solution938 solution938 = new Solution938();
    }
}