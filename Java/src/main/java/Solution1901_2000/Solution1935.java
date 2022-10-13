package Solution1901_2000;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1935 {
    public int canBeTypedWords(String text, String brokenLetters) {
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < brokenLetters.length(); i++) {
            set.add(brokenLetters.charAt(i));
        }
        String[] splits = text.split(" ");
        int count = 0;
        for (int i = 0; i < splits.length; i++) {
            boolean found = false;
            for (int j = 0; j < splits[i].length(); j++) {
                if (set.contains(splits[i].charAt(j))){
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1935 solution1935 = new Solution1935();
    }
}