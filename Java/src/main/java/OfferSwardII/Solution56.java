package OfferSwardII;

import tool.TreeNode;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution56 {
    HashSet<Integer> set = new HashSet<>();
    public boolean findTarget(TreeNode root, int k) {
        process(root);
        for (Integer nums: set) {
            if (set.contains(k - nums) && k != 2 * nums){
                return true;
            }
        }
        return false;
    }

    private void process(TreeNode root){
        if(root == null){
            return;
        }
        set.add(root.val);
        process(root.left);
        process(root.right);
    }
    
    
    public static void main(String[] args) {
        Solution56 solution56 = new Solution56();
    }
}