package QuestionBank.Solution1201_1300;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution1260 {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        int[] cols = new int[grid.length];
        cols[0] = grid[grid.length - 1][grid[0].length - 1];
        for (int j = 0; j < cols.length - 1; j++) {
            cols[j + 1] = grid[j][grid[0].length - 1];
        }
        for (int i = grid[0].length - 2; i >= 0; i--) {
            for (int j = 0; j < grid.length; j++) {
                grid[j][i + 1] = grid[j][i];
            }
        }
        for (int i = 0; i < cols.length; i++) {
            grid[i][0] = cols[i];
        }
        ArrayList<List<Integer>> lists = new ArrayList<>(grid.length);
        for (int i = 0; i < grid.length; i++) {
            ArrayList<Integer> list = new ArrayList<>();
            for (int j = 0; j < grid[0].length; j++) {
                list.add(grid[i][j]);
            }
            lists.add(list);
        }
        return lists;
    }


    public static void main(String[] args) {
        Solution1260 solution1260 = new Solution1260();
    }
}