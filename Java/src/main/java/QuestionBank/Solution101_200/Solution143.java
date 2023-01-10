package QuestionBank.Solution101_200;

import tool.ListNode;

import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;

/**
 * @author windows
 */
public class Solution143 {
    public void reorderList(ListNode head) {
        ArrayList<ListNode> list = new ArrayList<>();
        ListNode root = head;
        while (head != null){
            ListNode temp = head;
            head = head.next;
            temp.next = null;
            list.add(temp);
        }
        if (list.size() == 1){
            return;
        }
        ListNode first = null;
        ListNode last = null;
        for (int i = 0; i < list.size() / 2; i++) {
            first = list.get(i);
            last = list.get(list.size() - 1 - i);
            first.next = last;
            if (i < (list.size() / 2) - 1) {
                last.next = list.get(i + 1);
            }
        }
        if (list.size() % 2 == 1){
            last.next = list.get(list.size() / 2);
        }
    }


    public static void main(String[] args) {
        Solution143 solution143 = new Solution143();
    }
}