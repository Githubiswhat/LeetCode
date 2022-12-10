package QuestionBank.Solution801_900;

/**
 * @author windows
 */
public class Solution806 {
    public int[] numberOfLines(int[] widths, String s) {
        int count = 1;
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (sum + widths[s.charAt(i) - 'a'] > 100){
                count++;
                sum = widths[s.charAt(i) - 'a'];
            }else {
                sum += widths[s.charAt(i) - 'a'];
            }
        }
        return new int[]{count, sum};
    }


    public static void main(String[] args) {
        Solution806 solution806 = new Solution806();
    }
}