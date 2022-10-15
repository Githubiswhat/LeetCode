package Solution1401_1500;    
/**
 * @author windows
 */
public class Solution1475 {
    public int[] finalPrices(int[] prices) {
        int[] res = new int[prices.length];
        for (int i = 0; i < prices.length; i++) {
            int sub = 0;
            for (int j =  i + 1; j < prices.length; j++) {
                if (prices[j] <= prices[i]){
                    sub = prices[j];
                    break;
                }
            }
            res[i] = prices[i] - sub;
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1475 solution1475 = new Solution1475();
    }
}