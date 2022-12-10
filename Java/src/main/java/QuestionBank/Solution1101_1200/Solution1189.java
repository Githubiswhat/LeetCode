package QuestionBank.Solution1101_1200;
/**
 * @author windows
 */
public class Solution1189 {
    public int maxNumberOfBalloons(String text) {
        int[] chars = new int[26];
        for (int i = 0; i < text.length(); i++) {
            chars[text.charAt(i) - 'a']++;
        }
        int min = Integer.MAX_VALUE;
        char[] character = {'a', 'b', 'l', 'n', 'o'};
        int[] charsNums = {1, 1, 2, 1, 2};
        for (int i = 0; i < character.length; i++) {
            min = Math.min(min, chars[character[i] - 'a'] / charsNums[i]);
        }
        return min;
    }
    
    
    public static void main(String[] args) {
        Solution1189 solution1189 = new Solution1189();
    }
}