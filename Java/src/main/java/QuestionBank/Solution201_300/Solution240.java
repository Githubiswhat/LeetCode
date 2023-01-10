package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution240 {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        int n = matrix[0].length;
        int x = 0;
        int y = n - 1;
        while(x < m && y >= 0){
            if (matrix[x][y] == target) {
                return true;
            }else if (matrix[x][y] < target) {
                y--;
            }else {
                x++;
            }
        }
        return false;
    }


    public static void main(String[] args) {
        Solution240 solution240 = new Solution240();
        System.out.println(solution240.searchMatrix(new int[][]{{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}}, 5));
    }

}