package QuestionBank.Solution501_600;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.Collections;

/**
 * @author windows
 */
public class Solution530 {
    ArrayList<Integer> list = new ArrayList<>();
    public int getMinimumDifference(TreeNode root) {
        process(root);
        Collections.sort(list);
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < list.size() - 1; i++) {
            min = Math.min(min, list.get(i + 1) - list.get(i));
        }
        return min;
    }

    private void process(TreeNode root){
        if (root == null){
            return;
        }
        list.add(root.val);
        process(root.left);
        process(root.right);
    }


    public static void main(String[] args) {
        Solution530 solution530 = new Solution530();
    }
}