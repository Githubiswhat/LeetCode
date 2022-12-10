package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution58 {
    public int lengthOfLastWord(String s) {
        String[] str = s.split(" ");
        return str[str.length - 1].trim().length();
    }


    public static void main(String[] args) {
        Solution58 solution58 = new Solution58();
    }
}