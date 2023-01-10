package QuestionBank.Solution201_300;

import tool.TreeNode;

/**
 * @author windows
 */
public class Solution235 {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        TreeNode ancestor = root;
        while (true){
            if (ancestor.val > p.val && ancestor.val > q.val){
                ancestor = ancestor.left;
            }else if (ancestor.val < p.val && ancestor.val < q.val){
                ancestor = ancestor.right;
            }else {
                break;
            }
        }
        return ancestor;
    }


    public static void main(String[] args) {
        Solution235 solution235 = new Solution235();
    }
}