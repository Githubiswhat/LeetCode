package QuestionBank.Solution501_600;

/**
 * @author windows
 */
public class Solution557 {
    public String reverseWords(String s) {
        String[] splits = s.split(" ");
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < splits.length; i++) {
            sb.append(new StringBuilder(splits[i]).reverse());
            sb.append(" ");
        }
        return sb.substring(0, sb.length() - 1).toString();
    }


    public static void main(String[] args) {
        Solution557 solution557 = new Solution557();
    }
}