package LCP;

import Solution2401_2500.Solution2418;
import tool.TreeNode;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution44 {

    HashSet<Integer> set = new HashSet<>();
    public int numColor(TreeNode root) {
        process(root);
        return set.size();
    }

    private void process(TreeNode root){
        if (root == null){
            return;
        }
        set.add(root.val);
        process(root.left);
        process(root.right);
    }

    
    
    public static void main(String[] args) {
        Solution44 solution44 = new Solution44();
    }
}