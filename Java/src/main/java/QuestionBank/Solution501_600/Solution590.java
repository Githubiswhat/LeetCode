package QuestionBank.Solution501_600;

import tool.Node;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution590 {

    ArrayList<Integer> list = new ArrayList<>();
    public List<Integer> postorder(Node root) {
        if (root == null){
            return list;
        }
        List<Node> children = root.children;
        if (children != null){
            for (int i = 0; i < children.size(); i++) {
               postorder(children.get(i));
            }
        }
        list.add(root.val);
        return list;
    }


    public static void main(String[] args) {
        Solution590 solution590 = new Solution590();
    }
}