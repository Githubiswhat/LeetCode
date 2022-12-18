package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution107 {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        dfs(root, 0, map);
        ArrayList<List<Integer>> res = new ArrayList<>();
        for (int i = map.size() - 1; i >= 0; i--) {
            res.add(map.get(i));
        }
        return res;
    }

    private void dfs(TreeNode root, int level, Map<Integer, List<Integer>> map){
        if (root == null){
            return;
        }
        List<Integer> list = map.getOrDefault(level, new ArrayList<Integer>());
        list.add(root.val);
        map.put(level, list);
        dfs(root.left, level + 1, map);
        dfs(root.right, level + 1, map);
    }


    public static void main(String[] args) {
        Solution107 solution107 = new Solution107();
    }
}