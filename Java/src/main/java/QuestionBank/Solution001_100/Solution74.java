package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution74 {
    public boolean searchMatrix(int[][] matrix, int target) {
        boolean findTarget = false;
        int m = matrix.length;
        int n = matrix[0].length;
        int prev = matrix[0][0];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == target){
                    findTarget = true;
                }
                if (matrix[i][j] < prev){
                    return false;
                }else{
                    prev = matrix[i][j];
                }
            }
        }
        return findTarget;
    }


    public static void main(String[] args) {
        Solution74 solution74 = new Solution74();
    }
}