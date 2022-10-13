package Solution401_500;

/**
 * @author windows
 */
public class Solution463 {
    public int islandPerimeter(int[][] grid) {
        int sum = 0;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[i].length; j++) {
                if (grid[i][j] == 1){
                    sum += 4;
                    if (i - 1 >= 0 && grid[i - 1][j] == 1){
                        sum--;
                    }
                    if (i + 1 < grid.length && grid[i + 1][j] == 1){
                        sum--;
                    }
                    if (j - 1 >= 0 && grid[i][j - 1] == 1){
                        sum--;
                    }
                    if (j + 1 < grid[i].length && grid[i][j + 1] == 1){
                        sum--;
                    }
                }
            }
        }
        return sum;
    }


    public static void main(String[] args) {
        Solution463 solution463 = new Solution463();
        System.out.println(solution463.islandPerimeter(new int[][]{{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}}));
    }
}