package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution144 {

    ArrayList<Integer> list = new ArrayList<>();

    public static void main(String[] args) {
        Solution144 solution144 = new Solution144();
    }

    public List<Integer> preorderTraversal(TreeNode root) {
        if (root == null) {
            return list;
        }
        list.add(root.val);
        preorderTraversal(root.left);
        preorderTraversal(root.right);
        return list;
    }
}