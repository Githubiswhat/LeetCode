package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution113 {

    ArrayList<Integer> list = new ArrayList<>();
    ArrayList<List<Integer>> lists = new ArrayList<List<Integer>>();

    public static void main(String[] args) {
        Solution113 solution113 = new Solution113();
    }

    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return lists;
        }
        list.add(root.val);
        if (root.left == null && root.right == null) {
            if (targetSum - root.val == 0) {
                lists.add(new ArrayList(list));
                list.remove(list.size() - 1);
                return lists;
            }
        }
        pathSum(root.left, targetSum - root.val);
        pathSum(root.right, targetSum - root.val);
        list.remove(list.size() - 1);
        return lists;
    }
}