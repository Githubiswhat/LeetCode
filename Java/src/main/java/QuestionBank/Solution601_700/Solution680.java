package QuestionBank.Solution601_700;

/**
 * @author windows
 */
public class Solution680 {
    public boolean validPalindrome(String s) {
        String reverse = new StringBuilder(s).reverse().toString();
        if (reverse.equals(s)){
            return true;
        }
        int count = 0;
        for (int i = 0; i < reverse.length(); i++) {
            if (reverse.charAt(i) != s.charAt(i)){
                count++;
            }
        }
        return count == 2 && s.length() > 3;
    }


    public static void main(String[] args) {
        Solution680 solution680 = new Solution680();
    }
}