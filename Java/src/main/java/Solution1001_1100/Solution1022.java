package Solution1001_1100;

import tool.TreeNode;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution1022 {
    ArrayList<Integer> list = new ArrayList<>();
    public int sumRootToLeaf(TreeNode root) {
        process(root, 0);
        int sum = 0;
        for (int i = 0; i < list.size(); i++) {
            sum += list.get(i);
        }
        return sum;
    }

    private void process(TreeNode root, int num){
        if (root == null){
            return;
        }
        num = num * 2 + root.val;
        if (root.left == null && root.right == null){
            list.add(num);
            return;
        }
        process(root.left, num);
        process(root.right, num);
    }

    
    public static void main(String[] args) {
        Solution1022 solution1022 = new Solution1022();
    }
}