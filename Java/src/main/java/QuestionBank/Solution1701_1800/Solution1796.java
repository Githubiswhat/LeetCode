package QuestionBank.Solution1701_1800;

import java.util.ArrayList;
import java.util.Collections;

/**
 * @author windows
 */
public class Solution1796 {
    public int secondHighest(String s) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))){
                list.add(s.charAt(i) - '0');
            }
        }
        Collections.sort(list);
        for (int i = list.size() - 2; i >= 0; i--) {
            if (list.get(i) < list.get(list.size() - 1)){
                return list.get(i);
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution1796 solution1796 = new Solution1796();
        System.out.println(solution1796.secondHighest("dfa12321afd"));
    }
}