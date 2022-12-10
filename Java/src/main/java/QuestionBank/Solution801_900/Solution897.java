package QuestionBank.Solution801_900;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution897 {
    public TreeNode increasingBST(TreeNode root) {
        List<Integer> list = change2List(root, new ArrayList<>());
        return change2Tree(list);
    }

    private List<Integer> change2List(TreeNode root, List<Integer> list){
        if (root == null){
            return list;
        }
        change2List(root.left, list);
        list.add(root.val);
        change2List(root.right, list);
        return list;
    }

    private TreeNode change2Tree(List<Integer> list){
        TreeNode root = new TreeNode(0);
        TreeNode node = root;
        for (int i = 0; i < list.size(); i++) {
            TreeNode treeNode = new TreeNode(list.get(i));
            node.right = treeNode;
            node = node.right;
        }
        return root.right;
    }





    public static void main(String[] args) {
        Solution897 solution897 = new Solution897();
    }
}