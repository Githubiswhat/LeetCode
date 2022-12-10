package QuestionBank.Solution2101_2200;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2133 {
    public boolean checkValid(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            int row = 0;
            int col = 0;
            HashSet<Integer> set = new HashSet<>();
            int sum = ((1 + matrix.length) * matrix.length) / 2;
            for (int j = 0; j < matrix[0].length; j++) {
                if (set.contains(matrix[i][j])){
                    return false;
                }else{
                    set.add(matrix[i][j]);
                }
                row += matrix[i][j];
                col += matrix[j][i];
            }
            if (col != row || col != sum){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution2133 solution2133 = new Solution2133();
    }
}