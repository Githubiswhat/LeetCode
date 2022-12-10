package QuestionBank.Solution601_700;

import tool.TreeGenerate;
import tool.TreeNode;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution653 {
    public boolean findTarget(TreeNode root, int k) {
        Map<Integer, Integer> map = process(root, new HashMap<>());
        if (map.size() < 2) {
            return false;
        }
        for (Map.Entry<Integer, Integer> entry: map.entrySet()) {
            int sub = k - entry.getKey();
            if (sub == entry.getKey() && map.get(sub) < 2){
                return false;
            }
            if (map.containsKey(sub)){
                return true;
            }
        }
        return false;
    }

    private Map<Integer, Integer> process(TreeNode root, Map<Integer, Integer> map){
        if (root == null){
            return map;
        }
        map.put(root.val, map.getOrDefault(root.val, 0) + 1);
        process(root.left, map);
        process(root.right, map);
        return map;
    }

    public static void main(String[] args) {
        Solution653 solution653 = new Solution653();
        boolean target = solution653.findTarget(TreeGenerate.createTree(new Integer[]{2, null, 3}), 1);
        System.out.println(target);
    }
}