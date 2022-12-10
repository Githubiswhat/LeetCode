package QuestionBank.Solution1301_1400;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution1380 {
    public List<Integer> luckyNumbers (int[][] matrix) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < matrix.length; i++) {
            int min = Integer.MAX_VALUE;
            int minIndex = -1;
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] < min){
                    min = matrix[i][j];
                    minIndex = j;
                }
            }
            int value = matrix[i][minIndex];
            boolean flag = true;
            for (int j = 0; j < matrix.length; j++) {
                if (matrix[j][minIndex] > value){
                    flag = false;
                    break;
                }
            }
            if (flag){
                list.add(value);
            }
        }
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution1380 solution1380 = new Solution1380();
    }
}