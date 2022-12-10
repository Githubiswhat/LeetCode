package QuestionBank.Solution101_200;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution117 {
    public Node connect(Node root) {
        Map<Integer, List<Node>> map = new HashMap<>();
        process(root, 0, map);
        for (int i = 1; i < map.size(); i++) {
            List<Node> nodes = map.get(i);
            for (int j = 0; j < nodes.size() - 1; j++) {
                nodes.get(j).next = nodes.get(j + 1);
            }
        }
        return root;
    }


    private void process(Node root, int depth, Map<Integer, List<Node>> map) {
        if (root == null) {
            return;
        }
        List<Node> list = map.getOrDefault(depth, new ArrayList<>());
        list.add(root);
        map.put(depth, list);
        process(root.left, depth + 1, map);
        process(root.right, depth + 1, map);
    }


    public static void main(String[] args) {
        Solution117 solution117 = new Solution117();
    }
}