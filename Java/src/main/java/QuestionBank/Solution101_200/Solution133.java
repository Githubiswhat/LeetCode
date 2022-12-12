package QuestionBank.Solution101_200;

import java.util.*;

/**
 * @author windows
 */
public class Solution133 {

    public Node cloneGraph(Node node) {
        if (node == null) {
            return null;
        }
        HashMap<Node, Node> map = new HashMap<>();
        Queue<Node> queue = new LinkedList<>();
        Node res = new Node(node.val, new ArrayList<Node>());
        map.put(node, res);
        queue.offer(node);
        while (!queue.isEmpty()) {
            Node vertex = queue.poll();
            for (Node next : vertex.neighbors) {
                if (!map.containsKey(next)){
                    map.put(next, new Node(next.val, new ArrayList<Node>()));
                    queue.offer(next);
                }
                map.get(vertex).neighbors.add(map.get(next));
            }
        }
        return map.get(node);
    }

    public static void main(String[] args) {
        Solution133 solution133 = new Solution133();
    }


    class Node {
        private int val;
        private List<Node> neighbors;

        public <Node> Node(int val, List<Node> neighbors) {
            this.val = val;
            this.neighbors = (List<Solution133.Node>) neighbors;
        }
    }
}
