package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution199 {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        process(root, 0, map);
        for (int i = 0; i < map.size(); i++) {
            List<Integer> integers = map.get(i);
            ans.add(integers.get(integers.size() - 1));
        }
        return ans;
    }
    
    private void process(TreeNode node, int depth, Map<Integer, List<Integer>> map){
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
        Solution199 solution199 = new Solution199();
    }
}