package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution103 {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        ArrayList<List<Integer>> ans = new ArrayList<>();
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        process(root, 0, map);
        for (int i = 0; i < map.size(); i++) {
            List<Integer> list = map.get(i);
            if (i % 2 != 0) {
                for (int j = 0; j < list.size() / 2; j++) {
                    int temp = list.get(j);
                    list.set(j, list.get(list.size() - 1 - j));
                    list.set(list.size() - 1 - j, temp);
                }
                ans.add(list);
            } else {
                ans.add(list);
            }
        }
        return ans;
    }


    private void process(TreeNode treeNode, int depth, Map<Integer, List<Integer>> map) {
        if (treeNode == null){
            return;
        }
        List<Integer> list = map.getOrDefault(depth, new ArrayList<Integer>());
        list.add(treeNode.val);
        map.put(depth, list);
        process(treeNode.left, depth + 1, map);
        process(treeNode.right, depth+1, map);
    }


    public static void main(String[] args) {
        Solution103 solution103 = new Solution103();
    }
}