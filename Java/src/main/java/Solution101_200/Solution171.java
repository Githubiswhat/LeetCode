package Solution101_200;

/**
 * @author windows
 */
public class Solution171 {
    public int titleToNumber(String columnTitle) {
        int sum = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            sum *= 26;
            sum += columnTitle.charAt(i) - 'A' + 1;
        }
        return sum;
    }


    public static void main(String[] args) {
        Solution171 solution171 = new Solution171();
    }
}