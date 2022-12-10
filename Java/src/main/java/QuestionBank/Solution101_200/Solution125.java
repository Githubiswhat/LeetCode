package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution125 {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder();
        s = s.toLowerCase();
        for (int i = 0; i < s.length(); i++) {
            if (Character.isLetter(s.charAt(i)) || Character.isDigit(s.charAt(i))){
                sb.append(s.charAt(i));
            }
        }
        return sb.toString().equals(sb.reverse().toString());
    }


    public static void main(String[] args) {
        Solution125 solution125 = new Solution125();
        System.out.println(solution125.isPalindrome("race a car"));
    }
}