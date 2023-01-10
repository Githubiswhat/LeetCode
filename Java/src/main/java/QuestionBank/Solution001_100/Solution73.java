package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

/**
 * @author windows
 */
public class Solution73 {

    public void setZeroes(int[][] matrix) {
        HashSet<Integer> row = new HashSet<>();
        HashSet<Integer> col = new HashSet<>();
        int m = matrix.length;
        int n = matrix[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1){
                    row.add(i);
                    col.add(j);
                }
            }
        }
        for (int a : row) {
            for (int i = 0; i < n; i++) {
                matrix[a][i] = 0;
            }
        }
        for (int a : col) {
            for (int i = 0; i < m; i++) {
                matrix[i][a] = 0;
            }
        }
    }


    public static void main(String[] args) {
        Solution73 solution73 = new Solution73();
    }
}