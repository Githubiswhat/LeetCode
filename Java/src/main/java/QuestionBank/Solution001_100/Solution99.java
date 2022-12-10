package QuestionBank.Solution001_100;

import tool.TreeNode;

import java.util.*;

import static tool.TreeGenerate.createTree;

/**
 * @author windows
 */
public class Solution99 {
    public void recoverTree(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        HashMap<Integer, TreeNode> map = new HashMap<>();
        process(root, list, map);
        ArrayList origin = new ArrayList(list);
        Collections.sort(origin);
        for (int i = 0; i < origin.size(); i++) {
            if (origin.get(i) != list.get(i)) {
                TreeNode first = map.get(origin.get(i));
                TreeNode second = map.get(list.get(i));
                int temp = first.val;
                first.val = second.val;
                second.val = temp;
                return;
            }
        }
    }

    private void process(TreeNode node, List<Integer> list, Map<Integer, TreeNode> map) {
        if (node == null){
            return;
        }
        process(node.left, list, map);
        list.add(node.val);
        map.put(node.val, node);
        process(node.right, list, map);
    }




    public static void main(String[] args) {
        Solution99 solution99 = new Solution99();
        TreeNode tree = createTree(new Integer[]{1, 3, null, null, 2});
        solution99.recoverTree(tree);
    }
}