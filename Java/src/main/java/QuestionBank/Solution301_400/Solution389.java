package QuestionBank.Solution301_400;

/**
 * @author windows
 */
public class Solution389 {
    public char findTheDifference(String s, String t) {
        int[] chars = new int[26];
        int[] chars1 = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            chars1[t.charAt(i) - 'a']++;
        }
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] != chars1[i]) {
                return (char) (i + 'a');
            }
        }
        return '?';
    }


    public static void main(String[] args) {
        Solution389 solution389 = new Solution389();
    }
}