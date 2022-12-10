package QuestionBank.Solution1001_1100;

import java.util.Arrays;
import java.util.Comparator;

/**
 * @author windows
 */
public class Solution1030 {
    public int[][] allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        int[][] res = new int[rows * cols][2];
        int index = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
               res[index++] = new int[]{i, j};
            }
        }
        Arrays.sort(res, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return Math.abs((o1[0] - rCenter) * (o1[0] - rCenter) + (o1[1] - cCenter) * (o1[1] - cCenter)) -
                        Math.abs((o2[0] - rCenter) * (o2[0] - rCenter) + (o2[1] - cCenter) * (o2[1] - cCenter));
            }
        });
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1030 solution1030 = new Solution1030();
        System.out.println(solution1030.allCellsDistOrder(1, 2, 0, 0));
    }
}