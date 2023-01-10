package QuestionBank.Solution1201_1300;
/**
 * @author windows
 */
public class Solution1277 {

    public int countSquares(int[][] matrix) {
        int[][] df = matrix;
        int m = matrix.length;
        int n = matrix[0].length;
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i > 0 && j > 0){
                    if (matrix[i][j] == 1){
                        df[i][j] = Math.min(df[i - 1][j], Math.min(df[i][j - 1], df[i - 1][j - 1])) + 1;
                        count += df[i][j];
                    }
                }else {
                    count += matrix[i][j];
                }
            }
        }
        return count;
    }

    
    public static void main(String[] args) {
        Solution1277 solution1277 = new Solution1277();
    }
}