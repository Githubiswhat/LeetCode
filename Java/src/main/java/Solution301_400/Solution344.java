package Solution301_400;

/**
 * @author windows
 */
public class Solution344 {
    public void reverseString(char[] s) {
        for (int i = 0; i < s.length / 2; i++) {
            char temp = s[i];
            s[i] = s[s.length - 1 - i];
            s[s.length - 1 - i] = temp;
        }
    }


    public static void main(String[] args) {
        Solution344 solution344 = new Solution344();
    }
}