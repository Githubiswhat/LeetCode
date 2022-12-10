package QuestionBank.Solution501_600;

import tool.Node;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution589 {
    ArrayList<Integer> list = new ArrayList<>();
    public List<Integer> preorder(Node root) {
        if (root == null) {
            return list;
        }
        list.add(root.val);
        List<Node> children = root.children;
        if (children != null) {
            for (int i = 0; i < children.size(); i++) {
                preorder(children.get(i));
            }
        }
        return list;
    }


    public static void main(String[] args) {
        Solution589 solution589 = new Solution589();
    }
}