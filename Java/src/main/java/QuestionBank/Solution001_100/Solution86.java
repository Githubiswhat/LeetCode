package QuestionBank.Solution001_100;

import tool.ListNode;

import javax.swing.*;
import java.util.List;

/**
 * @author windows
 */
public class Solution86 {
    public ListNode partition(ListNode head, int x) {
        ListNode small = new ListNode(0);
        ListNode smallHead = small;
        ListNode large = new ListNode(0);
        ListNode largeHead = large;
        while (head != null){
            if (head.val < x){
                small.next = head;
                small = small.next;
            }else{
                large.next = head;
                large = large.next;
            }
            head = head.next;
        }
        large.next = null;
        small.next = largeHead.next;
        return smallHead.next;
    }


    public static void main(String[] args) {
        Solution86 solution86 = new Solution86();
    }
}