package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

import static tool.TreeGenerate.createTree;


/**
 * @author windows
 */
public class Solution114 {

    public void flatten(TreeNode root) {
        if (root == null){
            return;
        }
        ArrayList<Integer> res = new ArrayList<>();
        printTree(root, res);
        if (root.left != null){
            root.left = null;
        }
        for (int i = 1; i < res.size(); i++) {
            root.right = new TreeNode(res.get(i));
            root = root.right;
        }
    }

    private void printTree(TreeNode root, List<Integer> res) {
        if (root == null){
            return;
        }
        res.add(root.val);
        printTree(root.left, res);
        printTree(root.right, res);
    }


    public static void main(String[] args) {
        Solution114 solution114 = new Solution114();
        solution114.flatten(createTree(new Integer[]{1,2,5,3,4,null,6}));
    }
}