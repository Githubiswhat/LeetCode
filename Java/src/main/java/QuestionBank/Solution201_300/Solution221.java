package QuestionBank.Solution201_300;


import java.nio.file.attribute.DosFileAttributes;

/**
 * @author windows
 */
public class Solution221 {
    public int maximalSquare(char[][] matrix) {
        int max= 0;
        int m = matrix.length;
        int n = matrix[0].length;
        int[][] df = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i > 0 && j > 0){
                    if (matrix[i][j] == '1'){
                        df[i][j] = Math.min(df[i][j - 1], Math.min(df[i - 1][j - 1], df[i - 1][j])) + 1;
                    }
                }else {
                    df[i][j] = matrix[i][j] - '0';
                }
                max = Math.max(max, df[i][j]);
            }
        }
        return max * max;
    }


    public static void main(String[] args) {
        Solution221 solution221 = new Solution221();
    }
}