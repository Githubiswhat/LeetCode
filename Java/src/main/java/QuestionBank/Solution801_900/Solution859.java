package QuestionBank.Solution801_900;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution859 {

    public boolean buddyStrings(String s, String goal) {
        if (s.length() != goal.length() || s.length() < 2){
            return false;
        }
        boolean flag = false;
        boolean repeated = false;
        int index = -1;
        int count = 0;
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != goal.charAt(i)){
                count++;
                if (index == -1){
                    index = i;
                }else {
                    char beforeS = s.charAt(index);
                    char beforeGoal = goal.charAt(index);
                    flag = s.charAt(i) == beforeGoal && goal.charAt(i) == beforeS;
                }
            }
            if (set.contains(s.charAt(i))){
                repeated = true;
            }else {
                set.add(s.charAt(i));
            }
        }
        return (flag && count == 2) || (repeated && s.equals(goal));
    }



    public static void main(String[] args) {
        Solution859 solution859 = new Solution859();
        System.out.println(solution859.buddyStrings("abab", "baba"));
    }
}