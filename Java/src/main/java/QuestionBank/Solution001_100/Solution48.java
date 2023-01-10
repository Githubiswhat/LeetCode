package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution48 {
    public void rotate(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        for (int i = 0; i < m / 2; i++) {
            for (int j = 0; j < (n + 1)/ 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[m - j - 1][i];
                matrix[m - j - 1][i] = matrix[m - i - 1][m - j - 1];
                matrix[m - i - 1][m - j - 1] = matrix[j][m - i - 1];
                matrix[j][m - i - 1] = temp;
            }
        }
    }
}
