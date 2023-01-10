package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution64 {
    public int minPathSum(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int[][] df = new int[m][n];
        df[0][0] = grid[0][0];
        for (int i = 1; i < n; i++) {
            df[0][i] = df[0][i - 1] + grid[0][i];
        }
        for (int i = 1; i < m; i++) {
            df[i][0] = df[i - 1][0] + grid[i][0];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (df[i][j - 1] <= df[i - 1][j]){
                    df[i][j] = df[i][j - 1] + grid[i][j];
                }else{
                    df[i][j] = df[i - 1][j] + grid[i][j];
                }
            }
        }
        return df[m - 1][n - 1];
    }


    public static void main(String[] args) {
        Solution64 solution64 = new Solution64();
        System.out.println(solution64.minPathSum(new int[][]{{1, 2}, {5, 6}, {1, 1}}));
    }
}