package LCP;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution50 {
    public int giveGem(int[] gem, int[][] operations) {
        for (int i = 0; i < operations.length; i++) {
            int num = gem[operations[i][0]] / 2;
            gem[operations[i][0]] -= num;
            gem[operations[i][1]] += num;
        }
        Arrays.sort(gem);
        return gem[gem.length - 1] - gem[0];
    }
    
    
    public static void main(String[] args) {
        Solution50 solution50 = new Solution50();
    }
}