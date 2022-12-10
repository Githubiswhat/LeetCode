package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution102 {
    public List<List<Integer>> levelOrder(TreeNode root) {
        ArrayList<List<Integer>> ans = new ArrayList<>();
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        process(root, 0, map);
        for (int i = 0; i < map.size(); i++) {
            ans.add(map.get(i));
        }
        return ans;
    }

    private void process(TreeNode node, int depth, Map<Integer, List<Integer>> map) {
        if (node == null){
            return;
        }
        List<Integer> list = map.getOrDefault(depth, new ArrayList<>());
        list.add(node.val);
        map.put(depth, list);
        process(node.left, depth+1, map);
        process(node.right, depth+1, map);
    }





    public static void main(String[] args) {
        Solution102 solution102 = new Solution102();
    }
}