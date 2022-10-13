package Solution501_600;

import tool.Node;

import java.util.List;

/**
 * @author windows
 */
public class Solution559 {
    public int maxDepth(Node root) {
        if (root == null){
            return 0;
        }
        int max = 1;
        List<Node> children = root.children;
        for (int i = 0; i < children.size(); i++) {
            max = Math.max(max, maxDepth(children.get(i)) + 1);
        }
        return max;
    }



    public static void main(String[] args) {
        Solution559 solution559 = new Solution559();
    }
}