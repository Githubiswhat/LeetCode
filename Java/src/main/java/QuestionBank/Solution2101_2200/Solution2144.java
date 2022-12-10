package QuestionBank.Solution2101_2200;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2144 {
    public int minimumCost(int[] cost) {
        Arrays.sort(cost);
        int sum = 0;
        for (int i = cost.length - 1; i >= 0; i -= 3) {
            sum += cost[i];
            if (i - 1 >= 0){
                sum += cost[i - 1];
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution2144 solution2144 = new Solution2144();
    }
}