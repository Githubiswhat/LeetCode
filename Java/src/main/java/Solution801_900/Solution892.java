package Solution801_900;

/**
 * @author windows
 */
public class Solution892 {
    public int surfaceArea(int[][] grid) {
        int sum = 0;
        for (int i = 0; i < grid.length; i++) {
            int rowMax = 0;
            int colMax = 0;
            for (int j = 0; j < grid[i].length; j++) {
                rowMax = Math.max(rowMax, grid[i][j]);
                colMax = Math.max(colMax, grid[j][i]);
                if (grid[i][j] != 0){
                    sum += 2;
                }else{


                }
            }
            sum += rowMax * 2 + colMax * 2;
        }
        return sum;
    }



    public static void main(String[] args) {
        Solution892 solution892 = new Solution892();
    }
}