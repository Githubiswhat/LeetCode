package QuestionBank.Solution501_600;

/**
 * @author windows
 */
public class Solution566 {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        if (r * c != mat.length * mat[0].length){
            return mat;
        }
        int[] temp = new int[r * c];
        int index = 0;
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++) {
                temp[index++] = mat[i][j];
            }
        }
        int[][] res = new int[r][c];
        index = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[i][j] = temp[index++];
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution566 solution566 = new Solution566();
    }
}