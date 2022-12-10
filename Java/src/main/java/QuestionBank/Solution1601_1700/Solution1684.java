package QuestionBank.Solution1601_1700;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1684 {
    public int countConsistentStrings(String allowed, String[] words) {
        HashSet<Character> set = new HashSet<Character>();
        for (int i = 0; i < allowed.length(); i++) {
            set.add(allowed.charAt(i));
        }
        int count = 0;
        for (int i = 0; i < words.length; i++) {
            boolean flag = true;
            for (int j = 0; j < words[i].length(); j++) {
                if (!set.contains(words[i].charAt(j))) {
                    flag = false;
                    break;
                }
            }
            if (flag){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1684 solution1684 = new Solution1684();
    }
}