package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution766 {
    public boolean isToeplitzMatrix(int[][] matrix) {
        int i = 0;
        int j = matrix[0].length - 2;
        for (; j >= 0; j--) {
            int tempI = i + 1;
            int tempJ = j + 1;
            while (tempJ < matrix[0].length && tempI < matrix.length){
                if (matrix[tempI][tempJ] != matrix[i][j]){
                    return false;
                }
                tempI++;
                tempJ++;
            }
        }
        i = 1;
        j = 0;
        for (; i < matrix.length; i++) {
            int tempI = i + 1;
            int tempJ = j + 1;
            while (tempJ < matrix[0].length && tempI < matrix.length){
                if (matrix[tempI][tempJ] != matrix[i][j]){
                    return false;
                }
                tempI++;
                tempJ++;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution766 solution766 = new Solution766();
        System.out.println(solution766.isToeplitzMatrix(new int[][]{{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}}));
    }
}