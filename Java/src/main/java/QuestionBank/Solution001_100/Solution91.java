package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution91 {
    public int numDecodings(String s) {
        int n = s.length();
        int[] df = new int[n + 1];
        df[0] = 1;
        for (int i = 1; i <= n; i++) {
            if (s.charAt(i - 1) != '0'){
                df[i] += df[i - 1];
            }
            if (i > 1 && s.charAt(i - 2) != '0' && ((s.charAt(i - 2) - '0') * 10 + (s.charAt(i - 1) - '0') <= 26)){
                df[i] += df[i - 2];
            }
        }
        return df[n];
    }


    public static void main(String[] args) {
        Solution91 solution91 = new Solution91();
    }
}