package Solution801_900;

/**
 * @author windows
 */
public class Solution883 {
    public int projectionArea(int[][] grid) {
        int sum = 0;
        for (int i = 0; i < grid.length; i++) {
            int rowMax = 0;
            int colMax = 0;
            for (int j = 0; j < grid[i].length; j++) {
                rowMax = Math.max(rowMax, grid[i][j]);
                colMax = Math.max(colMax, grid[j][i]);
                if (grid[i][j] != 0){
                    sum++;
                }
            }
            sum += rowMax + colMax;
        }
        return sum;
    }


    public static void main(String[] args) {
        Solution883 solution883 = new Solution883();
    }
}