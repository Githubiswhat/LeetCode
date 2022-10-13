package Solution701_800;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.Collections;

/**
 * @author windows
 */
public class Solution783 {
    ArrayList<Integer> list = new ArrayList<>();
    public int minDiffInBST(TreeNode root) {
        process(root);
        int min = Integer.MAX_VALUE;
        Collections.sort(list);
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
        Solution783 solution783 = new Solution783();
    }
}