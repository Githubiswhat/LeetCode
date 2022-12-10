package QuestionBank.Solution201_300;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

import static tool.TreeGenerate.createTree;

/**
 * @author windows
 */
public class Solution230 {
    public int kthSmallest(TreeNode root, int k) {
        ArrayList<Integer> list = new ArrayList<>();
        process(root, list);
        return list.get(k - 1);
    }

    private void process(TreeNode root, List<Integer> list){
        if (root == null){
            return;
        }
        process(root.left, list);
        list.add(root.val);
        process(root.right, list);
    }


    public static void main(String[] args) {
        Solution230 solution230 = new Solution230();
        System.out.println(solution230.kthSmallest(createTree(new Integer[]{3, 1, 4, null, 2}), 1));
    }
}