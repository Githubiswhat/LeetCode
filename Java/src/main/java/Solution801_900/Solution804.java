package Solution801_900;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution804 {
    public int uniqueMorseRepresentations(String[] words) {
        String[] strings = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < words.length; i++) {
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < words[i].length(); j++) {
                sb.append(strings[words[i].charAt(j) - 'a']);
            }
            set.add(sb.toString());
        }
        return set.size();
    }


    public static void main(String[] args) {
        Solution804 solution804 = new Solution804();
    }
}