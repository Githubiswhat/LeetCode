package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution746 {
    public int minCostClimbingStairs(int[] cost) {
        int[] df = new int[cost.length + 1];
        df[0] = 0;
        df[1] = 0;
        for (int i = 2; i < df.length; i++) {
            df[i] = Math.min(df[i - 1] + cost[i - 1], df[i - 2] + cost[i - 2]);
        }
        return df[cost.length];
    }


    public static void main(String[] args) {
        Solution746 solution746 = new Solution746();
    }
}