package QuestionBank.Solution1501_1600;
/**
 * @author windows
 */
public class Solution1572 {
    public int diagonalSum(int[][] mat) {
        int sum = 0;
        for (int i = 0; i < mat.length; i++) {
            sum += mat[i][i];
        }
        for (int i = 0; i < mat.length; i++) {
            sum += mat[mat.length - 1 - i][i];
        }
        if (mat.length % 2 != 0){
            sum -= mat[mat.length / 2][mat.length / 2];
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1572 solution1572 = new Solution1572();
        System.out.println(solution1572.diagonalSum(new int[][]{{7, 3, 1, 9}, {3, 4, 6, 9}, {6, 9, 6, 6}, {9, 5, 8, 5}}));
    }
}