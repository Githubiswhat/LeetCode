package QuestionBank.Solution2001_2100;
/**
 * @author windows
 */
public class Solution2022 {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if (m * n != original.length){
            return new int[][]{};
        }
        int[][] res = new int[m][n];
        int index = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = original[index++];
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2022 solution2022 = new Solution2022();
    }
}