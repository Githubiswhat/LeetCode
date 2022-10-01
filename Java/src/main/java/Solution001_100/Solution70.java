package Solution001_100;

/**
 * @author windows
 */
public class Solution70 {
    public int climbStairs(int n) {
        int[] df = new int[n];
        df[0] = 1;
        df[1] = 1;
        for (int i = 2; i < n; i++) {
            df[i] = df[i - 1] + df[i - 2];
        }
        return df[n - 1];
    }


    public static void main(String[] args) {
        Solution70 solution70 = new Solution70();
        System.out.println(solution70.climbStairs(4));
    }
}