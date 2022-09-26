package Solution501_600;

/**
 * @author windows
 */
public class Solution598 {
    public int maxCount(int m, int n, int[][] ops) {
        int[][] nums = new int[m][n];
        for (int i = 0; i < ops.length; i++) {
            int x = ops[i][0];
            int y = ops[i][1];
            m = Math.min(m, x);
            n = Math.min(n, y);
        }
        return m * n;
    }


    public static void main(String[] args) {
        Solution598 solution598 = new Solution598();
        System.out.println(solution598.maxCount(3, 3, new int[][]{{2, 2}, {3, 3}}));
    }
}