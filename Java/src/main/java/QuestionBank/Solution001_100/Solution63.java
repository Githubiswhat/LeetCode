package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution63 {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        if (obstacleGrid[0][0] == 1){
            return 0;
        }
        int m = obstacleGrid.length;
        int n = obstacleGrid[0].length;
        int[][] df = new int[m][n];
        df[0][0] = 1;
        for (int i = 1; i < n; i++) {
            df[0][i] = obstacleGrid[0][i] == 1 ? 0 : df[0][i - 1];
        }
        for (int i = 1; i < m; i++) {
            df[i][0] = obstacleGrid[i][0] == 1 ? 0 : df[i - 1][0];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                df[i][j] = obstacleGrid[i][j] == 1 ? 0 : df[i][j - 1] + df[i - 1][j];
            }
        }
        return df[m - 1][n - 1];
    }


    public static void main(String[] args) {
        Solution63 solution63 = new Solution63();
    }
}