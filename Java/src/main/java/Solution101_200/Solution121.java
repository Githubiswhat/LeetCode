package Solution101_200;

/**
 * @author windows
 */
public class Solution121 {

    public int maxProfit(int[] prices) {
        int max = prices[prices.length - 1];
        int res = 0;
        for (int i = prices.length - 1; i >= 0; i--) {
            if (max - prices[i] > res){
               res = max - prices[i];
            }
            if (prices[i] > max) {
                max = prices[i];
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution121 solution121 = new Solution121();
    }
}