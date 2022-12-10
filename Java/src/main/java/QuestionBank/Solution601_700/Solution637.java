package QuestionBank.Solution601_700;

import tool.TreeGenerate;
import tool.TreeNode;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution637 {

    public List<Double> averageOfLevels(TreeNode root) {
        Map<Integer, List<Integer>> map = dfs(root, new HashMap(), 0);
        List<Double> result = new ArrayList<>();
        for (Map.Entry<Integer, List<Integer>> entry : map.entrySet()){
            List<Integer> list = entry.getValue();
            long sum = 0;
            for (Integer a : list) {
                sum += a;
            }
            result.add(sum / (list.size() * 1.0));
        }
        return result;
    }

    private Map<Integer, List<Integer>> dfs(TreeNode root, Map<Integer, List<Integer>> map, int index){
        if (root == null){
            return map;
        }
        List<Integer> list = map.getOrDefault(index, new ArrayList<Integer>());
        list.add(root.val);
        map.put(index, list);
        dfs(root.left, map, index + 1);
        dfs(root.right, map, index + 1);
        return map;
    }



    public static void main(String[] args) {
        Solution637 solution637 = new Solution637();
        TreeNode tree = TreeGenerate.createTree(new Integer[]{2147483647, 2147483647, 2147483647});
        List<Double> doubles = solution637.averageOfLevels(tree);
        System.out.println(doubles.toString());
    }
}