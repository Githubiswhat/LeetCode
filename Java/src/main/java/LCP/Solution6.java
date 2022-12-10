package LCP;
/**
 * @author windows
 */
public class Solution6 {
    public int minCount(int[] coins) {
        int sum = 0;
        for (int i = 0; i < coins.length; i++) {
            sum += coins[i] / 2;
            sum += coins[i] % 2;
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution6 solution6 = new Solution6();
    }
}