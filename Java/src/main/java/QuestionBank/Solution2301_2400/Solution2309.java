package QuestionBank.Solution2301_2400;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2309 {
    public String greatestLetter(String s) {
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            set.add(s.charAt(i));
        }
        HashSet<Character> tempSet = new HashSet<>();
        for (Character c : set){
            if (set.contains((char) (c + 32)) || set.contains((char) (c - 32))){
                tempSet.add(Character.toUpperCase(c));
            }
        }
        if (tempSet.size() == 0){
            return "";
        }
        ArrayList list = new ArrayList(tempSet);
        Collections.sort(list);
        return list.get(list.size() - 1).toString();
    }
    
    
    public static void main(String[] args) {
        Solution2309 solution2309 = new Solution2309();
        System.out.println(solution2309.greatestLetter("lEeTcOdE"));
    }
}