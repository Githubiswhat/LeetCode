package QuestionBank.Solution101_200;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution138 {
    public Node copyRandomList(Node head) {
        Node root = new Node(0);
        Node temp = root;
        Node headTemp = head;
        HashMap<Node, Node> map = new HashMap<>();
        while (headTemp != null){
            Node node = new Node(headTemp.val);
            temp.next = node;
            map.put(headTemp, node);
            temp = temp.next;
            headTemp = headTemp.next;
        }
        headTemp = head;
        temp = root.next;
        while (headTemp != null){
            Node random = map.get(headTemp.random);
            temp.random = random;
            temp = temp.next;
            headTemp = headTemp.next;
        }
        return root.next;
    }

    class Node {
        int val;
        Node next;
        Node random;

        public Node(int val) {
            this.val = val;
            this.next = null;
            this.random = null;
        }
    }


    public static void main(String[] args) {
        Solution138 solution138 = new Solution138();
    }
}