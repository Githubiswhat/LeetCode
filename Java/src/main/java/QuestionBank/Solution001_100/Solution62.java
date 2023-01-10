package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution62 {
    public int uniquePaths(int m, int n) {
        int[][] df = new int[m][n];
        df[0][0] = 1;
        for (int i = 1; i < n; i++) {
            df[0][i] = 1;
        }
        for (int i = 1; i < m; i++) {
            df[i][0] = 1;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                df[i][j] = df[i][j - 1] + df[i - 1][j];
            }
        }
        return df[m - 1][n - 1];
    }


    public static void main(String[] args) {
        Solution62 solution62 = new Solution62();
    }
}