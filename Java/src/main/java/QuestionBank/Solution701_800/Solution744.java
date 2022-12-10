package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution744 {
    public char nextGreatestLetter(char[] letters, char target) {
        for (int i = 0; i < letters.length; i++) {
            if (letters[i] > target) {
                return letters[i];
            }
        }
        return letters[0];
    }


    public static void main(String[] args) {
        Solution744 solution744 = new Solution744();
    }
}